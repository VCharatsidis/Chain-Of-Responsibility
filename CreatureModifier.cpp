#ifndef CREATUREMODIFIER_H
#define CREATUREMODIFIER_H
#include "Creature.cpp"

class CreatureModifier
{
	CreatureModifier* next = nullptr;

protected: Creature& creature;

public:
	explicit CreatureModifier(Creature& creature) : creature(creature)
	{

	}

	virtual ~CreatureModifier() = default;

	void add(CreatureModifier* cm)
	{
		if (next)
		{
			next->add(cm);
		}
		else {
			next = cm;
		}
		
	}

	virtual void handle()
	{
		if (next)
		{
			next->handle();
		}
	}

};

#endif
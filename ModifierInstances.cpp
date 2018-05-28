#include "CreatureModifier.cpp"
#include <iostream>

class DoubleAttackModifier : public CreatureModifier
{
public:
	explicit DoubleAttackModifier(Creature& creature) : CreatureModifier(creature)
	{

	}

	void handle() override
	{
		std::cout << " handle double attack modifier " << std::endl;
		creature.attack = creature.attack * 2;
		CreatureModifier::handle();
	}
};

class IncreaseDefenseModifier : public CreatureModifier
{
public:
	explicit IncreaseDefenseModifier(Creature& creature) : CreatureModifier(creature)
	{

	}

	void handle() override
	{
		if (creature.attack <= 2)
		{
			creature.defense++;
		}
		CreatureModifier::handle();
	}

};

class NoBonusModifier : public CreatureModifier
{
public:
	explicit NoBonusModifier(Creature& creature) : CreatureModifier(creature)
	{

	}

	void handle() override
	{

	}

};
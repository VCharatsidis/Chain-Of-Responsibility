#ifndef CREATURE_H
#define CREATURE_H

#include <string>
using namespace std;

struct Creature
{
	string name;
	int attack, defense;

	Creature(const string& name, const int attack, const int defense) : name(name), attack(attack), defense(defense)
	{

	}

	friend std::ostream& operator<<(std::ostream& os, const Creature& obj)
	{
		return os
			<< "name: " << obj.name
			<< " attack: " << obj.attack
			<< " defense: " << obj.defense;
	}
};

#endif
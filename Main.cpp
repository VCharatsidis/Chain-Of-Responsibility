#include <iostream>
#include <string>
#include "Creature.cpp";
#include "CreatureModifier.cpp";
#include "ModifierInstances.cpp";

using namespace std;

int main()
{
	Creature goblin{ "Goblin", 1, 1};

	CreatureModifier root{ goblin };

	NoBonusModifier noBonus{ goblin };
	DoubleAttackModifier r1{ goblin };
	IncreaseDefenseModifier r2{ goblin };
	DoubleAttackModifier r3{ goblin };
	/*DoubleAttackModifier r3{ goblin };
	DoubleAttackModifier r4{ goblin };*/

	
	//root.add(&noBonus);
	root.add(&r1);
	root.add(&r2);
	root.add(&r3);
	
	root.handle();

	cout << goblin << endl;

	getchar();
	return 0;
}
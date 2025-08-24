#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior()
{
	job_name = "Warrior";
	HP += 50;
	power += 10;
	defence += 5;
}

Warrior::Warrior(string nickname)
{
	job_name = "Warrior";
	setNickname(nickname);
	HP += 50;
	power += 10;
	defence += 5;
}

void Warrior::attack()
{
	cout << "Warrior 가 공격했다." << endl;
}

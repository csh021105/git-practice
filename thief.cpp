#include "thief.h"
#include <iostream>
using namespace std;

thief::thief()
{
	job_name = "thief";
	HP += 35;
	power += 15;
	defence += 2;
}

thief::thief(string nickname)
{
	job_name = "thief";
	setNickname(nickname);
	HP += 35;
	power += 15;
	defence += 2;
}

void thief::attack()
{
	cout << "thief 가 공격했다." << endl;
}

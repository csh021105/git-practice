#include "archer.h"
#include <iostream>
using namespace std;

archer::archer()
{
	job_name = "archer";
	HP += 40;
	power += 15;
	defence += 3;
}

archer::archer(string nickname)
{
	job_name = "archer";
	setNickname(nickname);
	HP += 40;
	power += 15;
	defence += 3;
}

void archer::attack()
{
	cout << "archer 가 공격했다." << endl;
}

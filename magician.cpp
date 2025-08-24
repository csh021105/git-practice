#include "magician.h"
#include <iostream>
using namespace std;

magician::magician()
{
	job_name = "magician";
	HP += 30;
	power += 17;
	defence += 1;
}

magician::magician(string nickname)
{
	job_name = "magician";
	setNickname(nickname);
	HP += 30;
	power += 17;
	defence += 1;
}

void magician::attack()
{
	cout << "magician 가 공격했다." << endl;
}

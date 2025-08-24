#pragma once
#include "Player.h"

class thief : public Player
{
public:
	thief();
	thief(string nickname);

	void attack() override;

};
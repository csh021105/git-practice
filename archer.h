#pragma once
#include "Player.h"

class archer : public Player
{
public:
	archer();
	archer(string nickname);

	void attack() override;

};
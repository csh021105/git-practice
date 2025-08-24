#pragma once
#include "Player.h"

class magician : public Player
{
public:
	magician();
	magician(string nickname);

	void attack() override;

};
#pragma once

#include "Character.h"
#include "GameIO.h"

class Game
{
	Character *player = NULL;
	GameIO io = GameIO();

public:
	Game();
	Game( Character *player);

	bool Play();
};


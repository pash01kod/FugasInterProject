#pragma once
#include "player.h"
#include "hero.h"

class Team
{
public:
	std::string name;
	Player players[5];
	Hero heroes[5];

	Team();
	
	Team(std::string name);

	Team(std::string name, Player players[5], Hero heroes[5]);
};
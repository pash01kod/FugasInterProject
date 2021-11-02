#pragma once
#include"player.h"
#include"hero.h"


class Team
{
public:
	Team();

	virtual ~Team();

private:
	Player players[5];
	Hero heroes[5];

};


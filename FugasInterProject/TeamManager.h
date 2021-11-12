#pragma once

#include "PlayerManager.h"
#include "HeroManager.h"
#include "Team.h"
#include <iostream>


class TeamManager
{
public:
	TeamManager();

	Team generateTeamOne(std::string teamName);
	Team generateTeamTwo(std::string teamName);

	void getTeamInfo(Team& team);
};


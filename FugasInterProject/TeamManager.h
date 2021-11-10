#pragma once
#include "PlayerManager.h"
#include "HeroManager.h"
#include "team.h"
#include <iostream>

class TeamManager
{
public:
	TeamManager();

	Team generateNewTeam(std::string teamName);

	Team generateNewTeamOne(std::string TeamName);

	void getTeamInfo(Team& team);
};


#pragma once

#include "game.h"


class TeamManager
{
public:
	TeamManager();

	Team generateNewTeam(std::string teamName);

	void getTeamInfo(Team& team);
};


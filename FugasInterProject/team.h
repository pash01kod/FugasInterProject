#pragma once
#include"player.h"
#include"hero.h"

struct TeamPart
{
	Player player;
	Hero hero;
};

class Team
{
public:
	Team();
	virtual ~Team();

	void generateNewTeam();

	void getTeamInfo();

private:

	std::string name;
	TeamPart member[5];
	

};
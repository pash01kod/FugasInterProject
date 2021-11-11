#pragma once

#include"hero.h"
#include"team.h"
#include"player.h"
#include"HeroManager.h"
#include"PlayerManager.h"
#include"Session.h"
#include"TeamManager.h"
#include<ctime>
#include<string>
#include<iostream>
#include<vector>
#include<list>


class GameManager
{
public:
	GameManager();

	void mainMenu();

	void performGameSession();

	void addRank(Team& winnerTeam);
	void removeRank(Team& loserTeam);

	std::list<Session> gameSessions;
};


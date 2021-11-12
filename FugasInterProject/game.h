#pragma once

#include"hero.h"
#include"team.h"
#include"player.h"
#include"HeroManager.h"
#include"PlayerManager.h"
#include"Session.h"
#include"TeamManager.h"
#include<string>
#include<iostream>
#include<vector>
#include<list>
#include<ctime>
#include <chrono>
#include <time.h>


class GameManager
{
public:
	GameManager();

	void performGameSession();

	void addRank(Team& winnerTeam);
	void removeRank(Team& loserTeam);

	std::list<Session> gameSessions;
};


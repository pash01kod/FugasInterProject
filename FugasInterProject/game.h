#pragma once


#include"Session.h"

#include<list>

/*
#include<ctime>
#include <chrono>
#include <time.h>
#include <algorithm>
#include <thread>
#include"TeamManager.h"
#include<string>
#include<iostream>
#include<vector>
#include"hero.h"
#include"team.h"
#include"player.h"
#include"HeroManager.h"
#include"PlayerManager.h"
*/



class GameManager
{
public:
	std::list<Session> gameSessions;

	GameManager();

	void performGameSession();

	void addRank(Team& winnerTeam);
	void removeRank(Team& loserTeam);
};


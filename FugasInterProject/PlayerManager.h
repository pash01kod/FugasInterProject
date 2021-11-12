#pragma once

#include <ctime>
#include <chrono>
#include <time.h>
#include <thread>
#include "player.h"


class PlayerManager
{
public:
	std::vector<Player> playersOne{
		Player(1, "Galya", (rand() % 100)),
		Player(2, "Marina", (rand() % 100)),
		Player(3, "Albina", (rand() % 100)),
		Player(4, "Katya", (rand() % 100)),
		Player(5, "Nina", (rand() % 100)),
		Player(6, "Maya", (rand() % 100)),
		Player(7, "Vanessa", (rand() % 100)),
		Player(8, "Liuda", (rand() % 100)),
		Player(9, "Masha", (rand() % 100)),
		Player(10, "Sasha", (rand() % 100)),
		Player(11, "Petrovich", (rand() % 100)),
		Player(12, "Bulkina", (rand() % 100)),
		Player(13, "Tamara", (rand() % 100)),
		Player(14, "Karina", (rand() % 100)),
		Player(15, "Kira", (rand() % 100)),
	};

	std::vector<Player> playersTwo{
		Player(16, "Ivan", (rand() % 100)),
		Player(17, "Petro", (rand() % 100)),
		Player(18, "Pavlo", (rand() % 100)),
		Player(19, "Chort", (rand() % 100)),
		Player(20, "Trash", (rand() % 100)),
		Player(21, "Maxim", (rand() % 100)),
		Player(22, "Playboy", (rand() % 100)),
		Player(23, "Stalin", (rand() % 100)),
		Player(24, "Rog", (rand() % 100)),
		Player(25, "Asus", (rand() % 100)),
		Player(26, "Acer", (rand() % 100)),
		Player(27, "Mc Heg", (rand() % 100)),
		Player(28, "Lean", (rand() % 100)),
		Player(29, "Xanax", (rand() % 100)),
		Player(30, "Log Vog", (rand() % 100)),
	};

    PlayerManager();
    PlayerManager(Player& players);


    Player createPlayer(Player& new_player);

    //Player getPlayerByName(std::string name);
    //Player getPlayerById(int id);
    
    void deletePlayer(int index);

    Player randPlayerOne();
    Player randPlayerTwo();

    void  showPlayerInfo(Player  player);
};
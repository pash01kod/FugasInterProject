#pragma once
#include <ctime>
#include <chrono>
#include <time.h>
#include <vector>
#include "player.h"


class PlayerManager
{
public:
	std::vector<Player> players{
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


    PlayerManager();
    PlayerManager(Player& players);


    Player createPlayer(Player& new_player);
    Player getPlayerByName(std::string name);
    Player getPlayerById(int id);
    
    void deletePlayer(int index);

    Player randPlayer();

    void  showPlayerInfo(Player  player);
};
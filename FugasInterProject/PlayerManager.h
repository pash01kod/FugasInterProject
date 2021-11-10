#pragma once
#include <ctime>
#include <chrono>
#include <time.h>
#include <vector>
#include "player.h"


class PlayerManager
{
public:
    std::vector<Player>players;

    PlayerManager() {}


    PlayerManager(Player& players)
    {
    players: this->players;
    }


    Player createPlayer(Player& new_player);

    Player getPlayerByName(std::string name);

    Player getPlayerById(int id);

    void deletePlayer(int index);

    Player randPlayer();

    Player randPlayerOne();



    void  showPlayerInfo(Player  player);

};
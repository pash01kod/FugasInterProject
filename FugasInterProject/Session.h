#pragma once
#include <ctime>
#include "team.h"

class Session
{
public:
    time_t StartTime = time(0);
    Team winner;
    Team teamOne;
    Team teamTwo;
    Team loser;

    Session() {}


    int getTeamHp(Team& team);

    int getTeamDamage(Team& team);

    void calculateWinner();

};

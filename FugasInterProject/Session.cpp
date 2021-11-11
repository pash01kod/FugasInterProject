#include "Session.h"

int Session::getTeamHp(Team& team)
{
	int sumHp = 0;
	for (auto hero : team.heroes)
	{
		sumHp += hero.getHp();
	}
	return sumHp;
}

int Session::getTeamDamage(Team& team)
{
	int sumDamage = 0;
	for (auto hero : team.heroes)
	{
		sumDamage += hero.getDamage();
	}
	return sumDamage;
}

void Session::calculateWinner()
{
	int teamOneHp = getTeamHp(teamOne);
	std::cout << "Health Points of the team ONE: " << teamOneHp << std::endl;
	int teamTwoHp = getTeamHp(teamTwo);
	std::cout << "Health Points of the team TWO: " << teamTwoHp << std::endl;

	int teamOneDamage = getTeamDamage(teamOne);
	std::cout << "Damage points of the team ONE: " << teamOneDamage << std::endl;
	int teamTwoDamage = getTeamDamage(teamTwo);
	std::cout << "Damage points of the team TWO: " << teamTwoDamage << std::endl;

	if (teamOneHp - teamTwoDamage > teamTwoHp - teamOneDamage)
	{
		winner = teamOne;
		loser = teamTwo;
	}
	else
	{
		winner = teamTwo;
		loser = teamOne;
	}
	std::cout << std::endl << " ---------- Session results ---------- " << std::endl;
	std::cout << "Winner is: " << winner.name;
}
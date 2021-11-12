#include "TeamManager.h"

TeamManager::TeamManager()
{

}

Team TeamManager::generateTeamOne(std::string teamName)
{
	PlayerManager player_manager;
	HeroManager hero_manager;

	Player players[5];
	Hero heroes[5];

	for (int i = 0; i < 5; i++)
	{
		players[i] = player_manager.randPlayerOne();
		player_manager.showPlayerInfo(players[i]);
		heroes[i] = hero_manager.randHeroOne();
		hero_manager.showHeroInfo(heroes[i]);

		std::cout << std::endl;
	}

	Team team(teamName, players, heroes);

	return team;
}

Team TeamManager::generateTeamTwo(std::string teamName)
{
	PlayerManager player_manager;
	HeroManager hero_manager;

	Player players[5];
	Hero heroes[5];

	for (int i = 0; i < 5; i++)
	{
		players[i] = player_manager.randPlayerTwo();
		player_manager.showPlayerInfo(players[i]);
		heroes[i] = hero_manager.randHeroTwo();
		hero_manager.showHeroInfo(heroes[i]);

		std::cout << std::endl;
	}

	Team team(teamName, players, heroes);

	return team;
}

void TeamManager::getTeamInfo(Team& team)
{
	PlayerManager player_manager;
	HeroManager hero_manager;

	std::cout << "Team: " << team.name << "\n";
	std::cout << "Players" << "\n";
	for (auto element : team.players)
	{
		player_manager.showPlayerInfo(element);
	}

	std::cout << "Heroes" << "\n";
	for (auto element : team.heroes)
	{
		hero_manager.showHeroInfo(element);
	}
}
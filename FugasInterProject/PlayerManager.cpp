#include "PlayerManager.h"

Player PlayerManager::createPlayer(Player& new_player)
{
	int id;
	std::string name;
	int randplayerRank = rand() % 100;
	std::cout << "Enter player`s name: ";
	std::cin >> name;
	std::cout << "Enter ID: ";
	std::cin >> id;
	std::cout << "Rank: " << randplayerRank << "\n";

	new_player.id = id;
	new_player.name = name;
	new_player.rank = randplayerRank;

	this->players.push_back(new_player);

	return new_player;
}

Player PlayerManager::getPlayerByName(std::string name)
{
	for (int i = 0; i < players.size(); i++)
	{
		if (players[i].getName() == name)
			return players[i];
	}
}

Player PlayerManager::getPlayerById(int id)
{
	for (int i = 0; i < players.size(); i++)
	{
		if (players[i].getId() == id)
			return players[i];
	}
}

void PlayerManager::showPlayerInfo(Player player)
{
	std::cout << "ID = " << player.getId() << "\tName\t" << player.getName() << "\tRank\t" << player.getRank() << "\n";
}

void PlayerManager::deletePlayer(int index)
{
	std::vector<Player>::iterator iterator = players.begin();
	std::advance(iterator, index);
	players.erase(iterator);
}

Player PlayerManager::randPlayer()
{
	srand((unsigned)time(NULL));
	int a;
	a = (rand() % players.size());
	Player player = players[a];

	deletePlayer(a);
	return player;
} 
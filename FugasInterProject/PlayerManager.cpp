#include "PlayerManager.h"

PlayerManager::PlayerManager() 
{
}

PlayerManager::PlayerManager(Player& players)
{
	this->playersOne;
}

Player PlayerManager::createPlayer(Player& new_player)
{
	int id;
	std::string name;
	int randPlayerRank = rand() % 100;
	std::cout << "Enter player`s name: ";
	std::cin >> name;
	std::cout << "Enter ID: ";
	std::cin >> id;
	std::cout << "Rank: " << randPlayerRank << "\n";

	new_player.id = id;
	new_player.name = name;
	new_player.rank = randPlayerRank;

	this->playersOne.push_back(new_player);

	return new_player;
}
/*
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
*/


void PlayerManager::showPlayerInfo(Player player)
{
	std::cout << "ID = " << player.getId() << "\tName\t" << player.getName() << "\tRank\t" << player.getRank() << "\n";
}

void PlayerManager::deletePlayer(int index)
{
	std::vector<Player>::iterator iterator = playersOne.begin();
	std::advance(iterator, index);
	playersOne.erase(iterator);
}

Player PlayerManager::randPlayerOne()
{
	srand((unsigned)time(0));
	int a;
	a = (rand() % playersOne.size());
	Player player = playersOne[a];

	deletePlayer(a);
	return player;
} 

Player PlayerManager::randPlayerTwo()
{
	srand((unsigned)time(0));
	int a;
	a = (rand() % playersTwo.size());
	Player player = playersTwo[a];

	std::vector<Player>::iterator iterator = playersTwo.begin();
	std::advance(iterator, a);
	playersTwo.erase(iterator);

	return player;
} 
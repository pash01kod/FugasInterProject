#include "player.h"

Player::Player()
{
	
}


Player::Player(int id, std::string name, int rank)
{
	this->name = name;
	this->id = id;
	this->rank = rank;
}

std::string Player::getName()
{
	return name;
}

int Player::getId()
{
	return id;
}

int Player::getRank()
{
	return rank;
}

void Player::setRank(int newRank)
{
	rank = newRank;
}


std::ostream& operator<< (std::ostream& out, const Player& player)
{
	out << "Name player\t" << player.name << "\tRank\t" << player.rank;
	return out;
}
/*
void Player::showPlayerInfo()
{
	std::cout << "Player " << this->name << " with "
		<< this->id << " id has " << this->rank << " rank\n";
}

*/

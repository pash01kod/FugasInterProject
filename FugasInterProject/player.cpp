#include "player.h"
Player::Player()
{
	id = 0;
	name = "NONE";
	rank = 0;
}

Player::~Player()
{

}

Player::Player(std::string name, int id, int rank)
{
	this->name = name;
	this->id = id;
	this->rank = rank;
}
/*
void Player::showPlayerInfo()
{
	std::cout << "Player " << this->name << " with "
		<< this->id << " id has " << this->rank << " rank\n";
}

*/

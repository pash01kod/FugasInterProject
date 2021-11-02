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

void Player::createPlayer(std::string name, int id)
{
	this->name = name;
	this->id = id;
	this->rank = 0;
}

void Player::showPlayerInfo()
{
	std::cout << "Player " << this->name << " with "
		<< this->id << " id has " << this->rank << " rank\n";
}
  
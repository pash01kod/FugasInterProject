#include "hero.h"

Hero::Hero()
{
	srand(time(0));

	this->id = 1 + rand() % 100;
	this->name = "";
	this->hp = 1 + rand() % 100;
	this->damage = 1 + rand() % 30;
}

Hero::~Hero()
{

}

Hero::Hero(int id, std::string name, int hp, int damage)
{
	this->id = id;
	this->name = name;
	this->hp = hp;
	this->damage = damage;
}

std::string Hero::getName()
{
	return name;
}

int Hero::getDamage()
{
	return damage;
}

int Hero::getId()
{
	return id;
}

int Hero::setHp(int hp)
{
	this->hp = hp;
	return hp;
}



/*
void Hero::showHeroInfo()
{
	std::cout << "Hero " << this->name << " with "
		<< this->id << " id has " << this->hp << " health and "
		<< this->damage << " points of damage attack\n";
}
*/


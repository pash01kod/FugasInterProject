#include "hero.h"

Hero::Hero()
{

}

Hero::~Hero()
{

}

void Hero::createHero(int id, std::string name, int hp, int damage)
{
	this->id = id;
	this->name = name;
	this->hp = hp;
	this->damage = damage;
}

#include "hero.h"

Hero::Hero()
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

int Hero::getHp()
{
	return hp;
}

int Hero::setHp(int hp)
{
	this->hp = hp;
	return hp;
}

std::ostream& operator<< (std::ostream& uot, const Hero& hero)
{
	uot << "Name hero\t" << hero.name << "\tDamage\t" << hero.damage << "\tHP\t" << hero.hp;
	return uot;
}



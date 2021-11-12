#pragma once
#include "player.h"
#include <iostream>


class Hero
{
public:
	int id;
	std::string name;
	int hp;
	int damage;

	Hero();
	Hero(int id, std::string name, int hp, int damage);
	
	std::string getName();
	int getId();
	int getDamage();
	int getHp();

	int setHp(int hp);

	friend std::ostream& operator<< (std::ostream& out, const Hero& hero);
};


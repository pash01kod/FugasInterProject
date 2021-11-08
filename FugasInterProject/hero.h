#pragma once
#include"game.h"

class Hero
{
public:
	int id;
	std::string name;
	int hp;
	int damage;

	Hero();
	virtual ~Hero();

	Hero(int id, std::string name, int hp, int damage);
	
	std::string getName();
	int getId();
	int getDamage();
	int getHp();

	int setHp(int hp);

	
};


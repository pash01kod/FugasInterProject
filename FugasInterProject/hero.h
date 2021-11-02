#pragma once
#include<iostream>

class Hero
{
public:
	Hero();
	virtual ~Hero();

	void createHero(int id, std::string name, int hp, int damage);
	void showHeroInfo();

	Hero GetHeroByName(std::string name);
	Hero GetHeroById(int id);
	
private:
	int id;
	std::string name;
	int hp;
	int damage;
};


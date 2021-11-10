#pragma once
#include "hero.h"
#include <ctime>
#include<vector>
#include <iostream>

class HeroManager
{
public:
	std::vector<Hero>heroes;

	Hero createHero(Hero& new_hero);
	Hero getHeroByName(std::string name);
	Hero getHeroById(int id);
	void showHeroInfo(Hero hero);
	void deleteHero(int index);

	void print();

	Hero randHero();
};


#pragma once
#include "hero.h"
#include <ctime>
#include <chrono>
#include <time.h>
#include <thread>
#include<vector>
#include <iostream>
#include <algorithm>

class HeroManager
{
public:
	std::vector<Hero>heroesOne{
		Hero(1, "Vampire", (rand() % 100), (rand() % 100)),
		Hero(2, "Witch", (rand() % 100), (rand() % 100)),
		Hero(3, "Goblin", (rand() % 100), (rand() % 100)),
		Hero(4, "Linch", (rand() % 100), (rand() % 100)),
		Hero(5, "Gopnik", (rand() % 100), (rand() % 100)),
		Hero(6, "Ninja", (rand() % 100), (rand() % 100)),
		Hero(7, "Archer", (rand() % 100), (rand() % 100)),
		Hero(8, "Wizard", (rand() % 100), (rand() % 100)),
		Hero(9, "Ranger", (rand() % 100), (rand() % 100)),
		Hero(10, "Necromancer", (rand() % 100), (rand() % 100)),
		Hero(11, "Stalker", (rand() % 100), (rand() % 100)),
		Hero(12, "Sniper", (rand() % 100), (rand() % 100)),
		Hero(13, "Demon", (rand() % 100), (rand() % 100)),
		Hero(14, "Tiger", (rand() % 100), (rand() % 100)),
		Hero(15, "Wolf", (rand() % 100), (rand() % 100))
	};
	
	std::vector<Hero>heroesTwo{
		Hero(16, "Comrad", (rand() % 100), (rand() % 100)),
		Hero(17, "Capitan", (rand() % 100), (rand() % 100)),
		Hero(18, "Petuh", (rand() % 100), (rand() % 100)),
		Hero(19, "Zek", (rand() % 100), (rand() % 100)),
		Hero(20, "Agatangel", (rand() % 100), (rand() % 100)),
		Hero(21, "Awaken", (rand() % 100), (rand() % 100)),
		Hero(22, "Bully", (rand() % 100), (rand() % 100)),
		Hero(23, "Bro", (rand() % 100), (rand() % 100)),
		Hero(24, "Mister Smith", (rand() % 100), (rand() % 100)),
		Hero(25, "Killah", (rand() % 100), (rand() % 100)),
		Hero(26, "Tveth", (rand() % 100), (rand() % 100)),
		Hero(27, "Jeembo", (rand() % 100), (rand() % 100)),
		Hero(28, "Depo", (rand() % 100), (rand() % 100)),
		Hero(29, "Pharaoh", (rand() % 100), (rand() % 100)),
		Hero(30, "White Punk", (rand() % 100), (rand() % 100))
	};

	Hero createHero(Hero& new_hero);
	//Hero getHeroByName(std::string name);
	//Hero getHeroById(int id);
	void showHeroInfo(Hero hero);
	void deleteHero(int index);

	void print();

	Hero randHeroOne();
	Hero randHeroTwo();
};


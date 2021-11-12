#pragma once
#include "game.h"

class HeroManager
{
public:
	std::vector<Hero>heroes{
		Hero(1, "vampire", (rand() % 100), (rand() % 100)),
		Hero(2, "witch", (rand() % 100), (rand() % 100)),
		Hero(3, "goblin", (rand() % 100), (rand() % 100)),
		Hero(4, "linch", (rand() % 100), (rand() % 100)),
		Hero(5, "gopnik", (rand() % 100), (rand() % 100)),
		Hero(6, "ninja", (rand() % 100), (rand() % 100)),
		Hero(7, "archer", (rand() % 100), (rand() % 100)),
		Hero(8, "wizard", (rand() % 100), (rand() % 100)),
		Hero(9, "ranger", (rand() % 100), (rand() % 100)),
		Hero(10, "necromancer", (rand() % 100), (rand() % 100)),
		Hero(11, "stalker", (rand() % 100), (rand() % 100)),
		Hero(12, "sniper", (rand() % 100), (rand() % 100)),
		Hero(13, "demon", (rand() % 100), (rand() % 100)),
		Hero(14, "tiger", (rand() % 100), (rand() % 100)),
		Hero(15, "wolf", (rand() % 100), (rand() % 100))
	};

	Hero createHero(Hero& new_hero);
	Hero getHeroByName(std::string name);
	Hero getHeroById(int id);
	void showHeroInfo(Hero hero);
	void deleteHero(int index);

	void print();

	Hero randHero();
};


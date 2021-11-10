#include "HeroManager.h"

Hero HeroManager::createHero(Hero &new_hero)
{
	int id;
	std::string name;
	int randHeroHp = rand() % 100;
	int randHeroDamage = rand() % 100;

	std::cout << "Enter name of your new hero: ";
	std::cin >> name;

	std::cout << "Enter id: ";
	std::cin >> id;

	std::cout << " HP is: " << randHeroHp << " points\n";
	std::cout << " Damage is: " << randHeroDamage << " points\n";

	new_hero.id = id;
	new_hero.name = name;
	new_hero.hp = randHeroHp;
	new_hero.damage = randHeroDamage;

	this->heroes.push_back(new_hero);

	return new_hero;
}

Hero HeroManager::getHeroByName(std::string name)
{
	for (int i = 0; i < heroes.size(); i++)
	{
		if (heroes[i].getName() == name)
		{
			return heroes[i];
		}
	}
}

void HeroManager::showHeroInfo(Hero hero)
{
	std::cout << "Hero " << hero.getName() << " with "
		<< hero.getId() << " id has " << hero.getHp() << " health and "
		<< hero.getDamage() << " points of damage attack\n";
}

void HeroManager::deleteHero(int index)
{
	std::vector<Hero>::iterator iterator = heroes.begin();
	std::advance(iterator, index);
	heroes.erase(iterator);
}

void HeroManager::print()
{
	for (auto element : heroes)
	{
		showHeroInfo(element);
	}
}

Hero HeroManager::RandHero()
{
	srand((unsigned)time(0));
	int a = (rand() % heroes.size());
	Hero hero = heroes[a];

	deleteHero(a);

	return hero;
}
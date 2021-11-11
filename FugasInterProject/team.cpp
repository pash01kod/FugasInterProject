#include "team.h"

Team::Team()
{

}

Team::Team(std::string name)
{
	this->name = name;
}

Team::Team(std::string name, Player players[5], Hero heroes[5])
{
	this->name = name;

	for (int i = 0; i < 5; i++)
	{
		this->players[i] = players[i];
		this->heroes[i] = heroes[i];
	}
}

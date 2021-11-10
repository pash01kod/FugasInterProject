#pragma once
#include <iostream>
#include <string>


class Player
{
public:

	int id;
	std::string name;
	int rank;

	Player();
	Player(std::string name, int id, int rank);
	
	std::string getName();
	int getId();
	int getRank();

	void setRank(int newRank);
};


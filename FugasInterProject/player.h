#pragma once
#include <iostream>
#include <string>
#include <vector>


class Player
{
public:

	int id;
	std::string name;
	int rank;

	Player();
	Player(int id, std::string name, int rank);
	
	std::string getName();
	int getId();
	int getRank();

	void setRank(int newRank);
	friend std::ostream& operator<< (std::ostream& out, const Player& player);

};


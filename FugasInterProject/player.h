#pragma once
#include <iostream>
#include <string>


class Player
{
public:
	Player();
	virtual ~Player();
	Player(std::string name, int id, int rank);
	
	std::string getName();
	int getId();
	
	

	int id;
	std::string name;
	int rank;
};


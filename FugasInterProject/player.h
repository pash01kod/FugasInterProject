#pragma once
#include<string>
#include<iostream>


class Player
{
public:
	Player();
	virtual ~Player();

	//functions
	void createPlayer(std::string name, int id);
	void showPlayerInfo();

	//accessors
	Player getPlayerByName(std::string name);

	Player getPlayerById(int id);
	

	
	
	//modifiers

private:

	int id;
	std::string name;
	int rank;
};


#pragma once

#include"team.h"
#include<ctime>
#include<string>
#include<iostream>
#include<vector>


class GameManager
{
public:
	GameManager();
	virtual ~GameManager();

	//operators

	//fuctions
	void mainMenu();
	void initGame();

	//accessors
	bool getPlaying() const { return this->playing; }

	//modifiers

private:
	int choice;
	bool playing;

	Hero hero;
};


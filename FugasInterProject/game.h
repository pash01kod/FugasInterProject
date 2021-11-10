#pragma once

#include"hero.h"
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


	int choice;
	bool playing;

	
};


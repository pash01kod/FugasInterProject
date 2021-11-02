#pragma once

#include"player.h"
#include<iomanip>
#include<ctime>


class GameManager
{
public:
	GameManager();
	virtual ~GameManager();

	//operators

	//fuctions
	void mainMenu();

	//accessors
	bool getPlaying() const { return this->playing; }
	
	//modifiers

private:
	int choice;
	bool playing;
};


#include <iostream>
#include "game.h"
#include <cstdlib>



int main()
{
	srand(time(NULL));

	GameManager game;

	while (game.getPlaying())
	{
		game.mainMenu();
	}


	return 0;
}
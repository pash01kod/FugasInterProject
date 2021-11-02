#include <iostream>
#include "game.h"




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
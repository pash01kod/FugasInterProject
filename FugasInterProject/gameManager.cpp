#include"game.h"


GameManager::GameManager()
{
	choice = 0;
	playing = true;
}

GameManager::~GameManager()
{

}


void GameManager::mainMenu()
{
	std::cout << "------ MAIN MENU ------" << std::endl << std::endl;
	std::cout << "0: Quit" << std::endl;
	std::cout << "1: Play" << std::endl;
	std::cout << "2: Games statistics" << std::endl;
	std::cout << "3: Players statistics" << std::endl;
	std::cout << "4: Heroes info" << std::endl;

	std::cout << std::endl << "Choice: ";

	std::cin >> choice;

	switch (choice)
	{
	case 0:
		playing = false;
		
		
		break;
	default:
		break;

	}
}
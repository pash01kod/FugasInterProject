#include"game.h"
#include "TeamManager.h"
#include "Team.h"

GameManager::GameManager()
{

}

void GameManager::performGameSession()
{
	std::cout << "************ START GAME ************" << "\n\n";
	std::string teamOneName = "NAZI";
	std::string teamTwoName = "USSR";
	TeamManager teamManager;

	std::cout << "First team: " << teamOneName << "\n";
	Team team1 = teamManager.generateTeamOne(teamOneName);


	std::cout << "Second team: " << teamTwoName << "\n\n";
	Team team2 = teamManager.generateTeamTwo(teamTwoName);


	Session session;
	session.teamOne = team1;
	session.teamTwo = team2;

	session.calculateWinner();

	gameSessions.push_back(session);

	addRank(session.winner);
	removeRank(session.loser);
	std::cout << "\n\n";

	std::cout << "Game session ENDED \n\n";
	std::cout << "++++++ RESULTS ++++++\n\n";
	teamManager.getTeamInfo(session.winner);
	std::cout << "\n\n";

	teamManager.getTeamInfo(session.loser);
	std::cout << "\n";
}

void GameManager::addRank(Team& winnerTeam)
{
	for (auto& player : winnerTeam.players)
	{
		player.setRank(player.getRank() + 25);
	}
}

void GameManager::removeRank(Team& loserTeam)
{
	for (auto& player : loserTeam.players)
	{
		player.setRank(player.getRank() - 25);
	}
}

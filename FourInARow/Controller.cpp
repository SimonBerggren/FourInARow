#include "Controller.h"

namespace General
{
	Controller::Controller()
	{
		menuPanel = new GUI::MainMenu();
		boardPanel = new GUI::BoardPanel();
		settings = new Settings();
		settingsPanel = new GUI::SettingsPanel(settings);

		HandleCommands();
	}

	void Controller::NextTurn()
	{

	}

	bool Controller::EndGame()
	{
		return false;
	}

	void Controller::HandleCommands()
	{
		bool running = true;

		while (running)
		{
			int command = menuPanel->WaitForCommand();

			switch (command)
			{ 
			case START_GAME:
				StartGame();
				break;
			case SHOW_ABOUT:
				menuPanel->browser->PrintAbout();
				break;
			case QUIT_GAME:
				running = false;
				break;
			default:
				break;
			}
		}
	}

	void Controller::StartGame()
	{
		settingsPanel->ShowSettings();
		board = new Board(settings->column, settings->rows);
		switch (settings->gametype)
		{
		case HUMAN_VS_HUMAN:
			playerA = new Entity::Human(boardPanel);
			playerB = new Entity::Human(boardPanel);
			break;
		case HUMAN_VS_AI:
			playerA = new Entity::Human(boardPanel);
			playerB = new Entity::AI(board);
			break;
		case AI_VS_AI:
			playerA = new Entity::AI(board);
			playerB = new Entity::AI(board);
			break;
		case AI_VS_REMOTE:
			playerA = new Entity::AI(board);
			playerB = new Entity::Remote(settings->IPAdress, settings->port);
			break;
		case HUMAN_VS_REMOTE:
			playerA = new Entity::Human(boardPanel);
			playerB = new Entity::Remote(settings->IPAdress, settings->port);
			break;
		case REMOTE_VS_REMOTE:
			playerA = new Entity::Remote(settings->IPAdress, settings->port);
			playerB = new Entity::Remote(settings->IPAdress, settings->port);
			break;
		}
		board->ShowBoard();
	}

	void Controller::ShowAbout()
	{

	}

	void Controller::RestartGame()
	{

	}

	void Controller::QuitGame()
	{

	}
}
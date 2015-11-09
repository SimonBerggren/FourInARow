#include "Controller.h"
#include <iostream>

namespace General
{
	Controller::Controller()
	{
		menuPanel = new GUI::MainMenu();
		gamePanel = new GUI::GamePanel();
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

				break;
			case QUIT_GAME:

				break;
			default:
				break;
			}
		}
	}

	void Controller::StartGame()
	{
		
		settingsPanel->ShowSettings();
		std::cout << "Settings is done. PlayerAName: " << settings->PlayerAName << "\n PlayerBName: " << settings->PlayerBName << std::endl;
		std::cout << "Columns: " << settings->column << "\nRows: " << settings->rows << std::endl;
		// create settingswindow
		// if settings->Complete
		// read settings
		// create board
		// create players
	}

	void Controller::ShowAbout()
	{

	}

	void Controller::RestartGame()
	{

	}

	void Controller::ExitGame()
	{

	}
}
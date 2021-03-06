#pragma once
#include <iostream>
#include <thread>
#include "Human.h"
#include "AI.h"
#include "Remote.h"
#include "Player.h"
#include "MainMenu.h"
#include "BoardPanel.h"
#include "SettingsPanel.h"
#include "Settings.h"
#include "Board.h"

namespace General
{
	/*v
	Controller has control of everything that exist. Thus it has control of the flow of the application.
	*/
	class Controller
	{
	private:
		GUI::MainMenu* menuPanel;
		GUI::BoardPanel* boardPanel;
		GUI::SettingsPanel* settingsPanel;
		GUI::Browser* browser;

		Settings* settings;
		Board* board;

		void EnterSettings();
		void PlayGame();
		void QuitGame();
	public:
		Controller();
		Entity::Player* playerA;
		Entity::Player* playerB;
		// Changes player turn.
		void NextTurn();
		// Ends the game.
		bool EndGame();
		// Handles commands
		void HandleCommands();
	};
}
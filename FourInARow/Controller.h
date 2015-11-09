#pragma once
#include "Player.h"
#include "MainMenu.h"
#include "BoardPanel.h"
#include "SettingsPanel.h"
#include "Settings.h"
#include "Board.h"

namespace General
{
	/*
	Controller has control of everything that exist. Thus it has control of the flow of the application.
	*/
	class Controller
	{
	private:
		GUI::MainMenu* menuPanel;
		GUI::BoardPanel* boardPanel;
		GUI::SettingsPanel* settingsPanel;

		Settings* settings;
		Board* board;

		void StartGame();
		void ShowAbout();
		void RestartGame();
		void ExitGame();
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
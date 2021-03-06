#pragma once
#include "Player.h"
#include "BoardPanel.h"

namespace Entity
{
	/*
	Receives input from a human player
	*/
	class Human : public Player
	{
	private:
		Human(Human&) = delete;
		Human& operator = (const Human&) = delete;

		GUI::BoardPanel* boardPanel;
	public:
		Human(GUI::BoardPanel* boardPanel);
		// Try to make a move based of wheter or not the mouse has been clicked and its position on the screen
		void MakeMove() override;
	};
}
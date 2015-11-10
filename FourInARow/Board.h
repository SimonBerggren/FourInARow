#pragma once
#include <iostream>

namespace General
{
	/*
		Board class acts as a game board and contains all the placed checkers.
	*/
	class Board
	{
	public:
		Board() = delete;
		Board(int col, int row);
		int col;
		int row;
		char** board;

		void Initialize();
		void ShowBoard();
		// Validates if a checker can be placed in chosen column.
		bool ValidateMove(int col);
		// Places a checker in chosen column.
		void PlaceChecker(int col);
	};
}
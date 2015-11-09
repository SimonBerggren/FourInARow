#pragma once

namespace General
{
	/*
		Board class acts as a game board and contains all the placed checkers.
	*/
	class Board
	{
	public:
		Board();
		int gridSizeX;
		int gridSizeY;
		// Validates if a checker can be placed in chosen column.
		bool ValidateMove(int col);
		// Places a checker in chosen column.
		void PlaceChecker(int col);
	};
}
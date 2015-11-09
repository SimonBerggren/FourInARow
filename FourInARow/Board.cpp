#include "Board.h"

namespace General
{
	Board::Board(int col, int row)
	{
		this->col = col;
		this->row = row;
	}

	bool Board::ValidateMove(int col)
	{
		return false;
	}

	void Board::PlaceChecker(int col)
	{

	}
}
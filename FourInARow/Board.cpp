#include "Board.h"

namespace General
{
	Board::Board(int col, int row)
	{
		this->col = col;
		this->row = row;
	}

	void Board::Initialize()
	{
		board = new char*[row];
		for (int i = 0; i < row; ++i)
			board[i] = new char[col];

		for (int y = 0; y < row; ++y)
		{
			for (int x = 0; x < col; ++x)
			{
				board[y][x] = 'X';
			}
		}
	}

	void Board::ShowBoard()
	{
		system("cls");

		for (int y = 0; y < row; ++y)
		{
			for (int x = 0; x < col; ++x)
			{
				std::cout << board[y][x] << " ";
			}

			std::cout << std::endl;
		}
	}

	bool Board::ValidateMove(int col)
	{
		return false;
	}

	void Board::PlaceChecker(int col)
	{
		
	}
}
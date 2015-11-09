#pragma once
#include "Player.h"
#include "Board.h"

namespace Entity
{
	/*
	Computer controlled player
	*/
	class AI : public Player
	{
	private:
		AI(AI&) = delete;
		AI& operator = (const AI&) = delete;

		General::Board* board;
	public:
		AI();
		// Calculates a move based on how the board looks like
		void MakeMove() override;
	};
}
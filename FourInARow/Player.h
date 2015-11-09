#pragma once
#include <string>

namespace Entity
{
	/*
	base class for all players in the game
	*/
	class Player
	{
	private:
		Player(Player&) = delete;
		Player& operator = (const Player&) = delete;
	public:
		Player() { }

		std::string name;
		// base method for when a player is making a move
		virtual void MakeMove() = 0;
	};
}
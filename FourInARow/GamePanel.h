#pragma once

namespace GUI
{
	/*
	Responsible for the GUI during the gameplay
	*/
	class GamePanel
	{
	public:
		GamePanel();

		bool IsMouseClicked();
		std::pair<int, int> GetMousePosition();
	};
}
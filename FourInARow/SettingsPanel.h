#pragma once
#include "Settings.h"

namespace GUI
{
	/*
	Responsible for the GUI before gameplay starts (when choosing which type of game to play, gridsize etc)
	*/
	class SettingsPanel
	{
	private:
		General::Settings* settings;
	public:
		SettingsPanel();

		void StartGame();
	};
}
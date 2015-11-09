#pragma once
#include <iostream>
#include <string>
#include "Settings.h"

namespace GUI
{
	/*
	Responsible for the GUI before gameplay starts (when choosing which type of game to play, gridsize etc)
	*/
	class SettingsPanel
	{
	public:
		SettingsPanel() = delete;
		SettingsPanel(General::Settings* settings);
		General::Settings* settings;

		void ShowSettings();
		
	};
}
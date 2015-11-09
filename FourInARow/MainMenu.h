#pragma once
#include "Browser.h"

namespace GUI
{
	/*
	Responsible for the GUI during the main menu
	*/
	class MainMenu
	{
	private:
		Browser* browser;
	public:
		MainMenu();

		bool IsAboutClicked();
		bool IsHowToPlayClicked();
		bool IsPlayClicked();
	};
}
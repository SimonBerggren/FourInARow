#pragma once
#include "Browser.h"

#define START_GAME	1
#define SHOW_ABOUT	2
#define QUIT_GAME	3

namespace GUI
{
	/*
	Responsible for the GUI during the main menu
	*/
	class MainMenu
	{
	private:
		Browser* browser;

		int choice;
	public:
		MainMenu();

		int WaitForCommand();

		bool IsAboutClicked();
		bool IsHowToPlayClicked();
		bool IsPlayClicked();
	};
}
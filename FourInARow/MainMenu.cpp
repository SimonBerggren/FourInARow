#include "MainMenu.h"

namespace GUI
{
	MainMenu::MainMenu() { }

	int MainMenu::WaitForCommand()
	{
		system("cls");

		std::cout << "1: Play Game" << std::endl;
		std::cout << "2: About" << std::endl;
		std::cout << "3: Quit Game" << std::endl;

		int choice = 0;

		while (choice == 0)
		{
			std::cin >> choice;

			if (choice == 1 || choice == 2 || choice == 3)
				return choice;
			else
			{
				std::cout << "Invalid command! Try again!" << std::endl;
				choice = 0;
			}
		}

		return 0;
	}

	bool MainMenu::IsAboutClicked()
	{
		return WaitForCommand() == 2;
	}

	bool MainMenu::IsHowToPlayClicked()
	{
		return WaitForCommand() == 2;
	}

	bool MainMenu::IsPlayClicked()
	{
		return WaitForCommand() == 1;
	}
}
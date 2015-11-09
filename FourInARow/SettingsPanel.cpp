#include "SettingsPanel.h"

namespace GUI
{
	SettingsPanel::SettingsPanel(General::Settings* settings)
		:settings(settings)
	{

	}

	void SettingsPanel::ShowSettings()
	{
		// player names
		system("cls");

		std::cout << "GameType: " << std::endl;
		std::cout << "1: Human vs Human" << std::endl;
		std::cout << "2: Human vs AI" << std::endl;
		std::cout << "3: AI vs AI" << std::endl;
		std::cout << "4: Human vs Remote" << std::endl;
		std::cout << "5: AI vs Remote" << std::endl;
		std::cout << "6: Remote vs Remote" << std::endl;
		int gametype;
		std::cin >> gametype;
		settings->gametype = gametype;

		std::string command;
		std::cout << "Player A Name:" << std::endl;
		std::cin >> command;
		settings->PlayerAName = command;
		std::cout << "Player B Name:" << std::endl;
		std::cin >> command;
		settings->PlayerBName = command;

		int nrCommand;
		std::cout << "Columns: " << std::endl;
		std::cin >> nrCommand;
		settings->column = nrCommand;

		std::cout << "Rows: " << std::endl;
		std::cin >> nrCommand;
		settings->rows = nrCommand;
	}
}
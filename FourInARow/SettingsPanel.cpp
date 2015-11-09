#include "SettingsPanel.h"
#include <iostream>
#include <string>

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
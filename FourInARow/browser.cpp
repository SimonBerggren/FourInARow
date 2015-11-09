#include "Browser.h"

namespace GUI
{
	Browser::Browser()
	{
	}

	void Browser::SetPage(std::string path)
	{
	}

	void Browser::PrintAbout()
	{
		system("cls");
		std::cout << "Created by : \n - Andersson Fastigheter\n - Berggren Bygg" << std::endl;
		system("pause");
	}
}
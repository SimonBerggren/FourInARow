#pragma once
#include <string>
#include <iostream>

namespace GUI
{
	/*
		Browser class can read html documents that contain information about the application.
	*/
	class Browser
	{
	public:
		Browser();
		std::string path;
		// Changes the directory path of the html file that wants to be viewed.
		void SetPage(std::string path);
		void PrintAbout();
	};
}
#pragma once
#include <string>

namespace General
{
	/*
		Settings is a container class. It contains user defined settings.
	*/
	class Settings
	{
	public:
		Settings();
		std::string PlayerAName;
		std::string PlayerBName;
		std::string IPAdress;
		int port;
		int column;
		int rows;
	};
}
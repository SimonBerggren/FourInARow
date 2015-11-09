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
		std::string PlayerAName;
		std::string PlayerBName;
		std::string IPAdress;
		int port;

		// Sets first player name
		void SetPlayerAName(std::string name);
		// Sets seconds player name
		void SetPlayerBName(std::string name);
		// Sets IP adress for connection to a server
		void SetIPAdress(std::string adress);
		// Sets port number
		void SetPort(int port);
	};
}
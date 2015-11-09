#pragma once
#include <string>

#define HUMAN_VS_HUMAN 1
#define HUMAN_VS_AI 2
#define AI_VS_AI 3
#define AI_VS_REMOTE 4
#define HUMAN_VS_REMOTE 5
#define REMOTE_VS_REMOTE 6

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
		int gametype;
	};
}
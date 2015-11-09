#pragma once
#include <string>

namespace Network
{
	/*
	Client sends information from the player to the server, and vice versa
	*/
	class Client
	{
	public:
		Client();

		std::string IP_Adress;
		int port;

		void ReceiveData(void);
		void SendData(void);
	};
}
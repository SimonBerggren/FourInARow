#pragma once
#include <string>
#include "Client.h"

namespace Network
{
	/*
	The server only communicates with the client, based on the information it receives from the client
	*/
	class Server
	{
	private:
		Client* client;
	public:
		Server();

		std::string IP_Adress;
		int port;

		void ReceiveData(void);
		void SendData(void);
	};
}
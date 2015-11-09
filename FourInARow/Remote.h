#pragma once
#include "Player.h"
#include "Client.h"

namespace Entity
{
	/*
	Used when playing over network
	*/
	class Remote : public Player
	{
	private:
		Remote(Remote&) = delete;
		Remote& operator = (const Remote&) = delete;

		Network::Client* client;

	public:
		Remote(std::string IPAdress, int port);
		// Makes a move when the mouse has been clicked, based on its position, and sends it to the Client which in turn sends the information to the server
		void MakeMove() override;
	};
}
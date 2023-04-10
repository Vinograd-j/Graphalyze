#pragma once

#include <iostream>
#include <WinSock2.h>
#include <WS2tcpip.h>

class Server
{

public:

	bool TryStartSocket() const;

	SOCKET StartServer(const char* host, const char* port) const;


};


//#include "server.h"
//#include "WinSock2.h"
//
//bool Server::TryStartSocket() const
//{
//
//	WSADATA wsaData;
//
//	int resultCode = WSAStartup(MAKEWORD(2, 2), &wsaData);
//
//	if (resultCode != 0) {
//		return false;
//	}
//
//	return true;
//}
//
//SOCKET Server::StartServer(const char* host, const char* port) const
//{
//
//	addrinfo* result = nullptr, * ptr = nullptr, hints;
//
//	ZeroMemory(&hints, sizeof(hints));
//
//	hints.ai_family = AF_INET;
//	hints.ai_socktype = SOCK_STREAM;
//	hints.ai_protocol = IPPROTO_TCP;
//	hints.ai_flags = AI_PASSIVE;
//
//
//	int iResult = getaddrinfo(nullptr, "8080", &hints, &result);
//
//	if(iResult != 0)
//	{
//		WSACleanup();
//		return INVALID_SOCKET;
//	}
//
//}

//If you want more info, see https://github.com/embeddedmz/socket-cpp


#include "TCPServer.h"

using namespace std;

void server (int Port) {
	
	//Asks the port number from the user.
	cout << "Please enter a port number: ";
	cin >> Port;
	
	//Creates the server.
	CTCPServer server(Log, Port);
	
	//"scket of the connected client"
	ASocket::Socket Connection
	
	Listening untill something happens.
	(*m_pTCPServer).listen(Connection)
	

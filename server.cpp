//If you want more info, see https://github.com/embeddedmz/socket-cpp


#include "TCPServer.h"

using namespace std;

void server (int Port, string Text) {
	
	//Asks the port number from the user.
	cout << "Please enter a port number: ";
	cin >> Port;
	
	//Asks the text that that client will try to access.
	cout << "Please enter the text that clients will try to access.";
	cin >> Text;
	
	//Creates the server.
	CTCPServer server(Log, Port);
	
	//"scket of the connected client"
	ASocket::Socket Connection;
	
	//This happens untill the program is closed.
	while (true) {
		//Listening untill something happens.
		if ((*m_pTCPServer).listen(Connection)) {
			//Sends the text to the client.
			(*m_pTCPServer).send(Connection, Text)
			
			//And if something goes wrong...
			else {
				cout << "Something went wrong";
		}
	}
	

//If you want more info, see https://github.com/embeddedmz/socket-cpp
//If you don't want more info, fine then.

#include "TCPServer.h"

using namespace std;

void Server () {
	int Port;
	string Text;
	
	//Asks the port number from the user.
	cout << "Please enter a port number: ";
	cin >> Port;
	
	//Asks the text that that client will try to access.
	cout << "Please enter the text that clients will try to access.";
	cin >> Text;
	
	//Creates the server.
	CTCPServer Server(Log, Port);
	
	//"scket of the connected client"
	ASocket::Socket Connection;
	
	//This happens untill the program is closed.
	while (true) {
		//Listening untill something happens.
		if (Server->Listen(Connection)) {
			//Sends the text to the client.
			Server->Send(Connection, Text)
		}
			//And if something goes wrong...
			else {
				cout << "Something went wrong";
		}
	}
}
	

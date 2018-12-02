//These comments tell what is intended to happen, not what will happen.


#include <iostream>
#include <string>

//Please do not complain about this...
#include "client.cpp"
#include "server.cpp"

using namespace std;


//This variable tells if the program should be a client or a server.
string Role;


//Logger that I took from a socket.cpp example.
auto Log = [] (const string& LogMessage) {
	cout << LogMessage << endl;
};

int main () {
	//Asking the user to input CLIENT or SERVER.
	cout << "Choose role CLIENT or SERVER (type it here and press enter):";
	cin >> Role;
	cout << endl;;
	
	//This checks if the input is valid.
	if (Role == CLIENT || Role == SERVER) {
		//Runs client or server.
		if (Role == CLIENT) {
			//client();
		}
		else if (Role == SERVER) {
			server();
		}
	}
	//If the input is not valid.
	else {
		cout << "INVALID INPUT! PROGRAM SHUTTING DOWN";
	}
	
	return 0;
}

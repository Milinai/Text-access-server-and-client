//These comments tell what is intended to happen, not what will happen.


#include <iostream>
#include <string>

using namespace std;

//
void Log (const string& Message) {
	cout << Message;
}

void (*Log) (const string&) = &Log;


/* 
	I split the code in three files and I did it because i think
	it looks better this way. I did not make separate .h and .cpp libraries,
	because I could have writed everything here, so imagine the code
	from the other files is just here.
*/
#include "client.cpp"
#include "server.cpp"



//This variable tells if the program should be a client or a server.
string Role;




int main () {
	//Asking the user to input CLIENT or SERVER.
	cout << "Choose role CLIENT or SERVER (type it here and press enter):";
	cin >> Role;
	cout << endl;;

	//This checks if the input is valid.
	if (Role == "CLIENT" || Role == "SERVER") {
		//Runs client or server.
		if (Role == "CLIENT") {
			Client();
		}
		else if (Role == "SERVER") {
			Server();
		}
	}
	//If the input is not valid.
	else {
		cout << "INVALID INPUT! PROGRAM SHUTTING DOWN";
	}

	return 0;
}

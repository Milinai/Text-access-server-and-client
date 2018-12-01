#include <iostream>
#include <string>


using namespace std;


//Client or server?
string Role;


//Logger that I took from a socket.cpp example.
auto Log = [] (const string& LogMessage) {
	cout << LogMessage << endl;
};

int main () {
	cout << "Choose role CLIENT or SERVER (type it here and press enter):";
	cin >> Role;
	cout << endl;;
	
	if (Role == CLIENT || Role == SERVER) {
		if (Role == CLIENT) {
			client();
		}
		if (Role == SERVER) {
			server();
		}
	}
	else {
		cout << "INVALID INPUT! PROGRAM SHUTTING DOWN";
	}
	
	return 0;
}

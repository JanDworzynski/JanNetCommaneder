#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void Ping() {
    string address;

    cout << "What address u want to ping? ";
    cin >> address;

    string command = "ping -n 4 " + address;

    cout << "Pinging " << address << endl;

    system(command.c_str());
}
void dnslookup() {
	string address;
	cout << "What address u want to lookup? ";
	cin >> address;
	string command = "nslookup " + address;
	cout << "Looking up " << address << endl;
	system(command.c_str());
}
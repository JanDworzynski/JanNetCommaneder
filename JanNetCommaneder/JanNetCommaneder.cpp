#include <iostream>
#include <string>
using namespace std;
void Ping();
void dnslookup();

int main() {
        cout << "======================" << endl;
        cout << "      JanNetTools     " << endl;
        cout << "======================" << endl;
        int toolnumber;

        cout << "1. Ping" << endl;
        cout << "2. DNS Lookup" << endl;
        cout << "3. Exit" << endl;
        cout << "Please input tool number: ";
        cin >> toolnumber;

        switch (toolnumber)
        {
        case 1:
			Ping(); 
            break;
        case 2:
            dnslookup();
            break;
        case 3:
            cout << "Exiting JanNetTools" << endl;
            return 0;
    
    }
}
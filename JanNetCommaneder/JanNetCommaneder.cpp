#include <iostream>
#include <string>
using namespace std;
void Ping();

int main() {
        cout << "======================" << endl;
        cout << "      JanNetTools     " << endl;
        cout << "======================" << endl;
        int toolnumber;

        cout << "1. Ping" << endl;
        cout << "2. Port Scanner" << endl;
        cout << "3. Exit" << endl;
        cout << "Please input tool number: ";
        cin >> toolnumber;

        switch (toolnumber)
        {
        case 1:
			Ping(); 
            break;
        case 2:
            cout << "Port scanner" << endl;
            break;
        case 3:
            cout << "Exiting JanNetTools" << endl;
            return 0;
    
    }
}
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    char ch1[10], ch2[10];
    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> ch1 >> ch2;

        if(!strcmp(ch1, ch2)) {
            cout << "Caso #" << i+1 << ": De novo!" << endl;
        }
        else if(!strcmp(ch1, "tesoura")) {
            if(!strcmp(ch2, "papel") || !strcmp(ch2, "lagarto"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        }
        else if(!strcmp(ch1, "papel")) {
            if(!strcmp(ch2, "pedra") || !strcmp(ch2, "Spock"))  
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        }
        else if(!strcmp(ch1, "pedra")) {
            if(!strcmp(ch2, "lagarto") || !strcmp(ch2, "tesoura"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        }
        else if(!strcmp(ch1, "lagarto")) {
            if(!strcmp(ch2, "papel") || !strcmp(ch2, "Spock"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        }
        else if(!strcmp(ch1, "Spock")) {
            if(!strcmp(ch2, "tesoura") || !strcmp(ch2, "pedra"))
                cout << "Caso #" << i+1 << ": Bazinga!" << endl;
            else
                cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        }
        else {
            cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;
        }
    }

    return 0;
}

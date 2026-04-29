#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string str;
    while(cin >> n) {        /// reads until EOF
        cin.ignore();
        for(int i = 0; i < n; i++){
            getline(cin, str); /// just consume/ignore the input
        }
        cout << "Ciencia da Computacao" << endl; /// always print this
    }
    return 0;
}
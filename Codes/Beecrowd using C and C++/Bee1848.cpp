#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int count = 0, sum = 0;

    while (count < 3) {
        getline(cin, s);

        if (s == "caw caw") {
            cout << sum << endl;
            count++;
            sum = 0;
        } else if (s == "---") sum += 0;
        else if (s == "--*") sum += 1;
        else if (s == "-*-") sum += 2;
        else if (s == "-**") sum += 3;
        else if (s == "*--") sum += 4;
        else if (s == "*-*") sum += 5;
        else if (s == "**-") sum += 6;
        else if (s == "***") sum += 7;
    }

    return 0;
}

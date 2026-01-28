#include <iostream>

using namespace std;

int main() {
char ch;
cout << "Enter any letter: ";
cin >> ch;
ch = tolower(ch);
if(ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
    cout << "Vowel."<<endl;

}
else {
    cout << "Consonant."<<endl;

}
return 0;
}

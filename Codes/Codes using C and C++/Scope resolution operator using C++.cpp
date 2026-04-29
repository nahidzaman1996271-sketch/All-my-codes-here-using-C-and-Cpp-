#include <iostream>
#include <conio.h>

using namespace std;

int x = 69; // global variable

int main(){

::x = 70; // declaring local variable, and if we remove this line the output will be the global value 69

cout << "The global value is: " << x << endl;


getch();

}

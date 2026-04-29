#include <iostream>
#include <conio.h>
using namespace std;

void display(int *num);

int main(){
int x = 10;
cout <<"Before passing the value: " << x << endl;

display(&x); // letting the value pass
cout <<"After passing the values: " << x << endl;
getch();
}

void display(int *num){ // <-- Here's a pointer of a receiver
*num = 20;
}

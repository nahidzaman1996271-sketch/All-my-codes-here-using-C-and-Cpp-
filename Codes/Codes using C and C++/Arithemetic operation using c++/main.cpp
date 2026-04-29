#include <iostream>

using namespace std;
int main(){
int m,n;
cout << "Enter first number: ";
cin >> m;
cout << "Enter second number: ";
cin >> n;
int sum, sub, mul,rem;
double division;
sum = m + n;
sub = m - n;
mul = m * n;
rem = m % n;
division = (float) m / n;
cout << "The sum is: "<< sum << endl;
cout << "The substraction is: "<< sub << endl;
cout << "The division is: "<< division << endl;
cout << "The multiplication is: "<< mul << endl;
cout << "The remainder is: "<< rem << endl;
return 0;
}

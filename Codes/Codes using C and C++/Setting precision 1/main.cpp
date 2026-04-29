#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int m,n;
cout << "Enter two numbers: ";
cin >> m >> n;
int sum, rem, sub, mul;
double div;
sum = m + n;
sub = m - n;
mul = m * n;
rem = m % n;
div = (float)m / n;   // typecasting
cout << "The sum is: " << fixed << setprecision(1) << static_cast<double>(sum) << endl;
cout << "The subtraction is: " <<  fixed << setprecision(1) << static_cast<double>(sub) << endl;
cout << "The multiplication is: " <<  fixed << setprecision(1) << static_cast<double>(mul) << endl;
cout << "The remainder is: " <<  fixed << setprecision(1) << static_cast<double>(rem) << endl;
cout << "The division is: " <<  fixed << setprecision(1) << static_cast<double>(div) << endl;
return 0;
}

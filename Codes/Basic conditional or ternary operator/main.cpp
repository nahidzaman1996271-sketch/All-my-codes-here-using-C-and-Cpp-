#include <iostream>

using namespace std;

int main(){
int num1, num2;
cout << "Enter two integer value: ";
cin >> num1 >> num2;
int maximum = (num1 > num2)? num1 : num2;
cout <<"Maximum number is: " << maximum << endl;
return 0;


}

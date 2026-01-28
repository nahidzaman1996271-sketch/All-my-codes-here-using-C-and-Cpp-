#include <iostream>

using namespace std;
void addition(int a, int b);
void subtraction(int a, int b);
void multiplication(int a, int b);
void division(int a, int b);
void modulo(int a, int b);

int main(){
addition(10,3);
subtraction(10,3);
multiplication(10,3);
division(10,3);
modulo(10,3);
cout << "All the functions are called."<<endl;
return 0;
}

void addition(int a, int b){
int sum = a+b;
cout << "Sum is = "<<sum<<endl;
}

void substraction(int a, int b){
int sub = a-b;
cout << "Subtraction is = "<<sub <<endl;
}
void multiplication(int a, int b){
int mul = a*b;
cout << "Multiplication is = "<<mul <<endl;
}
void division(int a, int b){
float div = (float)a/b;
cout << "Division is = "<<div<<endl;
}
void modulo(int a, int b){
int mod = a%b;
cout << "Modulus is = "<<mod<<endl;
}



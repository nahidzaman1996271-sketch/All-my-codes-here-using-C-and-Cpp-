#include <iostream>
#include <conio.h>

using namespace std;

int fact(int n);

int main(){
int factorial = fact(4);
cout << factorial;
getch();
}
int fact(int n)
{

    if (n==1){
        return 1;
    }
    else {

        return n*fact(n-1);
    }

}

#include <iostream>
#include <stdio.h>
using namespace std;
void Onedigit (int a); /// if input is one digit
void Twodigit (int b); ///if input is two digit
void Threedigit (int c); ///if input is three digit
int main(){
int n;
while (cin >> n){
    if(n<10)
    Onedigit(n);
    else if(n<100)
    Twodigit(n);
    else Threedigit(n);
    cout <<endl;
}
    return 0;
}
void Onedigit (int a)
{    
    if (a==0) return;
    else if(a==1) cout << "I";
    else if (a==2) cout << "II";
    else if (a==3) cout << "III";
    else if (a==4) cout << "IV";
    else if (a==5) cout << "V";
    else if (a==6) cout << "VI";
    else if (a==7) cout << "VII";
    else if (a==8) cout << "VIII";
    else if (a==9) cout << "IX";
}
void Twodigit (int b)
{
  int d = b/10; // second digit
  b = b - (d*10); //first digit
  if(d==1) cout << "X";
  else if(d==2) cout << "XX";
  else if(d==3) cout << "XXX";
  else if(d==4) cout << "XL";
  else if(d==5) cout << "L";
  else if(d==6) cout << "LX";
  else if(d==7) cout << "LXX";
  else if(d==8) cout << "LXXX";
  else if(d==9) cout << "XC";
    Onedigit(b);
}
void Threedigit (int c)
{
    int d = c/100; //third digit
    c = c - (d*100); //rest of the digits
    if(d==1) cout << "C";
    else if(d==2) cout << "CC";
    else if(d==3) cout << "CCC";
    else if(d==4) cout << "CD";
    else if(d==5) cout << "D";
    else if(d==6) cout << "DC";
    else if(d==7) cout << "DCC";
    else if(d==8) cout << "DCCC";
    else if(d==9) cout << "CM";
    Twodigit(c);

}
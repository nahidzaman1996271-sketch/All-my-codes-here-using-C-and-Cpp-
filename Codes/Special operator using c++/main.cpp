#include <iostream>

using namespace std;

int main()
{
  int a;
  float b;
  double q;
  char z;
  char name[20];

  int u = sizeof(a);
  cout << "Size of integer value: " << u <<endl;
  u = sizeof(b);
  cout << "Size of floating value: " << u <<endl;
   u = sizeof(q);
  cout << "Size of double value: " << u <<endl;
   u = sizeof(z);
  cout << "Size of character value: " << u <<endl;
   u = sizeof(name);
  cout << "Size of string value: " << u <<endl;

  return 0;

}

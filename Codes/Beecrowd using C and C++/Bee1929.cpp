#include <iostream>
using namespace std;
bool isTriangle (int x, int y, int z){
    return (x + y > z) && (x + z > y) && (y + z > x);
}
int main()
{
   int a,b,c,d;
   cin >> a >> b >> c >> d;
   if (isTriangle(a,b,c) || isTriangle(a,b,d) || isTriangle(a,c,d) || isTriangle(b,c,d))
       cout << "S" << endl;
   else
       cout << "N" << endl;
   return 0;
}
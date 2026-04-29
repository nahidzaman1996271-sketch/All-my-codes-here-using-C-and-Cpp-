#include <iostream>

using namespace std;

int main()
{
   int m,n,sum;

   sum = (m=10,n=20,sum=m+n);
   cout << "The sum is: " << sum << endl;
   return 0;
}

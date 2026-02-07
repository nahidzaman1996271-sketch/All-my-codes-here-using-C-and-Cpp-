#include <iostream>
using namespace std;
int main()
{
   int N[1000];
   int t;
   cin >> t;
   for(int i=0;i<1000;i++){
    N[i] = i%t;
    cout << "N[" << i <<"] = " << N[i] << endl;

   }
   return 0;
}

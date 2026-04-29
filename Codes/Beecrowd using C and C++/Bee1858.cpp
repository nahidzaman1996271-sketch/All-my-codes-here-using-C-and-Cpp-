#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    while ((cin >> n) && n!= EOF){
         l=20;
         for(i=0; i<n; i++){
            cin >> m;
            if(m < l){
                l = m;
                k = i+1;
            }
         }
        cout << k << endl;
        k = 0;
    }
    return 0;
}
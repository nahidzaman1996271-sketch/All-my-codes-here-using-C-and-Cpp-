#include <iostream>
using namespace std;
int main()
{
    int n;
    for(;;){
        cin >> n;
        if(n==0)break;
        long long int arr[n][n],l,k,m,n,o,p,i;
        for(i = 0;i < n; i++){
            k=1;
            for(j=0;j<n;j++){
                arr[i][j]=k;
                k+=k;
            }
        }
    }
}

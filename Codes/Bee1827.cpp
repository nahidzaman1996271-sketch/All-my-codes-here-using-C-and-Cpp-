#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,m,n,arr[102][102];
    while ((cin >> n) && n!=EOF){
            k = n-1;
            l=n/3;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
               if(i==j) arr[i][j]=2;
               else arr[i][j]=0;
                  if(j==k)arr[i][j]=3;
            }k--;
        }
                for(i=l; i<n-l; i++){
            for(j=l; j<n-l; j++){
             arr[i][j]=1;
             if(i==n/2 && j==n/2)arr[i][j]=4;
            }k--;
        }
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
               cout << arr[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

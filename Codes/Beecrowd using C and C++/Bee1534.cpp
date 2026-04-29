#include <iostream>
using namespace std;
int main()
{
    int i, j, N;
    while(cin >> N){
        if (N==EOF)
            break;
        int M[N][N];
        int k = N-1;
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                    if(j==k)
                    M[i][j]=2;
            else if(i==j)
                M[i][j]=1;
            else
                M[i][j]=3;
        }
       k--;
    }
      for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                    cout << M[i][j];
            }
           cout << endl;
      }
    }
      return 0;
    }

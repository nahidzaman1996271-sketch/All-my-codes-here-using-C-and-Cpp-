#include<iostream>
#include<iomanip>
using namespace std;
int VALUE(int N,int i,int j){
    int a,b,c,d;
    a=i;
    b=j;
    c=N-i-1;
    d=N-j-1;
    if((a<=b) && (a<=c)&& (a<=d))
        return a+1;
    else if((b<=a) && (b<=c)&& (b<=d))
        return b+1;
    else if((c<=a) && (c<=b)&& (c<=d))
        return  c+1;
    else return d+1;
}
int main()
{
    int i,j,N;
    while(true){
        cin >> N;
        if(N==0)
        break;
        int M[N][N];
        /// fill the array with appropriate value
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
            M[i][j] = VALUE(N,i,j);
        }
    }
   /// print the array
   for(i=0;i<N;i++){
     for(j=0;j<N;j++){
            if(j==0)
            cout << setw(3)<<M[i][j];
     else
        cout << setw(4) << M[i][j];
   }
     cout << endl;
    }
    cout << endl;
    }
return 0;
    }

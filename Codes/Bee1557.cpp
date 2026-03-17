#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    for(;;){
        cin >> n;
        if(n==0)break;
        long long int arr[n][n],l,k,p,i,j;
        l=1;
        for(i = 0;i < n; i++){
            k=l;
            for(j=0;j<n;j++){
                arr[i][j]=k;
                k+=k;
            } l+=l;
        }
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                        if(n==1)cout <<arr[i][j];
                      else if(n==2){
                            if(j==0)cout <<arr[i][j];
                            else cout <<" " <<arr[i][j];
                        }
                        else if (n==3 || n==4){
                            if(j==0)cout <<" " <<arr[i][j];
                            else  cout <<setw(3)<<arr[i][j];
                        }
                else if(n==5){
                    if(j==0)cout<<setw(3)<<arr[i][j];
                    else cout<<setw(4)<<arr[i][j];
                }
                   else if(n==6 ||n==7){
                    if(j==0)cout<<setw(4)<<arr[i][j];
                    else cout<<setw(5)<<arr[i][j];
                   }
                   else if(n==8 ||n==9){
                     if(j==0)cout<<setw(5)<<arr[i][j];
                     else cout<<setw(6)<<arr[i][j];
                   }
                   else if(n==10){
                     if(j==0)cout<<setw(6)<<arr[i][j];
                     else cout<<setw(7)<<arr[i][j];
                   }
                   else if(n==11||n==12){
                     if(j==0)cout<<setw(7)<<arr[i][j];
                      else cout<<setw(8)<<arr[i][j];
                   }
                   else if(n==13 || n==14){
                     if(j==0)cout<<setw(8)<<arr[i][j];
                      else cout<<setw(9)<<arr[i][j];
                   }
                   else if (n==15){
                     if(j==0)cout<<setw(9)<<arr[i][j];
                       else cout<<setw(10)<<arr[i][j];
                   }
                }
                cout<<endl;
    }
    cout <<endl;
}
return 0;
}

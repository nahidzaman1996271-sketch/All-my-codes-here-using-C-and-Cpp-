#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float M[12][12];
    char O;

    cin>>O;
    float sum=0;
    ///inputing in the array
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> M[i][j];
        }
    }
    /// calculating the sum
for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
        if(i > j){
            sum += M[i][j];
        }
    }
}
     float avg = sum/66.0;
     if(O =='S'){
        cout << fixed << setprecision(1) << sum <<endl;
     }
     else{
        cout << fixed << setprecision(1) << avg << endl;
     }
     return 0;
}

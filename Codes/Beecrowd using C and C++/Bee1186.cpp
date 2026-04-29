#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double M[12][12],sum=0,avg;
    int x=0;
    char O;
    cin >> O;
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            cin >> M[i][j];
        }
    }
      for(int i=11;i>0;i--){
        for(int j=11;j>x;j--){
        sum+=M[i][j];
        }
        x++;
      }
      avg = sum/66.0;
      if(O=='S'){
       cout << fixed << setprecision(1) << sum << endl;
      }
else{
     cout << fixed << setprecision(1) << avg << endl;
      }
      return 0;
}

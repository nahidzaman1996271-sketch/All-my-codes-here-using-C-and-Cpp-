#include <iostream>
#include <cmath>
using namespace std;
int main(){
int A,B,C;
while(cin>>A){
    if(A==0)break;
    cin >> B >> C;
    int houseArea = A*B;
    double landArea = houseArea / (C/100.0);
    int x = sqrt(landArea);
    cout << x <<  endl;

}
   return 0;
}

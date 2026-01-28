#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int a,k=0,sum=0;

float avg;
while(1){
        cin >> a;
        if (a<0)break;
        sum+=a;
k++;
}
if(k>0){
avg = (float)sum/k;

cout << fixed <<setprecision(2);
cout << avg << endl;
}
return 0;
}

#include <iostream>
using namespace std;
int main(){
int x,z;
cin >> x >> z;
while(x>=z){
    cin >> z;
}
int a=1;
int sum=0;

for(int i=0;i<=z;i++){
        if(sum>z)break;
    sum += x+i;

if (sum < z)a++;
}
cout << a <<endl;
return 0;
}

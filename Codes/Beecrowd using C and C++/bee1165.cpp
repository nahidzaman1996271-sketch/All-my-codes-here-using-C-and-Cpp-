#include <iostream>
using namespace std;
int main(){
int t,n,i;
cin >> t;
while (t--){
    int prime=1;
    cin >> n;
    if(n<=1)prime=0;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime)cout << n <<" eh primo" <<endl;
   else cout << n <<" nao eh primo" <<endl;
}
return 0;
}

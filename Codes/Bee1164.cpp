#include <iostream>
using namespace std;
int main(){
int n,t;
cin >> t;
while(t--){
        cin >> n;
    int sum = 0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n)cout << n <<" eh perfeito"<<endl;
else cout << n << " nao eh perfeito" << endl;
}
return 0;
}

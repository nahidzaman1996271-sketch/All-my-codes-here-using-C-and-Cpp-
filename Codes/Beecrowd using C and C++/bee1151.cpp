#include <iostream>
using namespace std;
int main(){
int n[46],k;
cin >> k;
n[0]=0;
if(k>0){
    n[1]=1;
    for(int i=2;i<k;i++){
        n[i]=n[i-1]+n[i-2];
    }
       for(int i=0;i<k;i++){
            if(i>0)cout <<" ";
       cout << n[i];
}

}
return 0;
}

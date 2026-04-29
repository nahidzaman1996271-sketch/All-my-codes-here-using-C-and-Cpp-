#include <iostream>

using namespace std;

int main(){

int a,b;
int sum = 0;
cin >> b >> a;
while (a <= 0){
    cin >> a;
}

    for(int i = 0; i< a;i++){
        sum += b+i;
    }
    cout << sum << endl;
    return 0;
}



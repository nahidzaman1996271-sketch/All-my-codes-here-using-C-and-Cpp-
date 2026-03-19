#include <iostream>
using namespace std;
int main(){
    int n, s, i, l, k;
    while(cin >> n){
        k = 0;
        for(i = 0; i < n; i++){
            cin >> s;
            if(s > k)
                k = s;
        }
        if(k < 10)       l = 1;
        else if(k < 20)  l = 2;
        else             l = 3;
        cout << l << endl;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int P,N,prev,cur;
    cin >> P >> N >> prev;
    for(int i=1; i<N; i++){
        cin >> cur;
        if(abs(cur-prev)>P){
            cout << "GAME OVER" <<endl;
            return 0;
        }
        prev = cur;

    }
    cout << "YOU WIN" <<endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int n,a,j;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> j;
        if(j%2==0){
            cout << "0" << endl;
        }
        else {
            cout << "1" << endl;
        }
    }
    return 0;
}
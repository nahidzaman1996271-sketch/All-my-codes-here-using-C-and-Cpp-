#include<iostream>
using namespace std;
int main()
{
    int a, n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a;
        if (a > 2015)
        cout << a-2014 << " A.C." << endl;
        else if (2015 > a)
        cout << 2015-a << " D.C." << endl;
        else cout << "1 A.C." << endl;
       
    }
     return 0;
}
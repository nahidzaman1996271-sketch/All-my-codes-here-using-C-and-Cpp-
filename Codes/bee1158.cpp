#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int m,n;
        cin >> m >> n;
        if (m % 2==0)m++;
        long long sum = 0;
        for(long long i = 0; i < n; i++){
            sum += m + 2*i;
        }
        cout << sum << endl;
    }
    return 0;

}

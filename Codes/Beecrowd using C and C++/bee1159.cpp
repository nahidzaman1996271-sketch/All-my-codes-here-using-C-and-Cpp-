#include <iostream>
using namespace std;

int main()
{


    while (1){
            int n;
        cin >> n;
    if (n==0)break;
    if (n%2!=0)n++;
    int sum = 0;
    for(int i = 0; i < 5;i++){
        sum += n + (2* i) ;
    }
    cout << sum << endl;

}
return 0;
}

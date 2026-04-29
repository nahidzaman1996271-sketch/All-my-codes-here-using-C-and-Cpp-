#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i,n;
    long long a,b;
    char str1[101],str2[6],str3[101],str4[6];
    cin >> n;
    for(i=0; i< n; i++){
           cin >> str1 >> str2 >> str3 >> str4;
           cin >> a >> b;
           a += b;
             if(str2[0]=='I'){
                if(a%2==0)cout << str3 << endl;
                else cout << str1 << endl;
             }
             else {
                if(a%2==0)cout << str1 << endl;
                else cout << str3 << endl;
             }
    }
    return 0;
}
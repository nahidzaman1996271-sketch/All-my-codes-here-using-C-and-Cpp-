#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int C,i,n; 
    cin >> C;
    char ch[10];
    for(i=0; i<C; i++){
        cin >> ch >> n;
        if(!strcmp(ch, "Thor"))
        cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;

}
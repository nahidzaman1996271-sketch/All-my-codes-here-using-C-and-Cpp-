#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i,n;
    char ch[35];
    strcpy(ch,"LIFE IS NOT A PROBLEM TO BE SOLVED");
    while((cin >> n) && n != EOF){
        for(i=0; i<n;i ++){
            cout << ch[i];
        }
        cout << endl;
}
       return 0;
}
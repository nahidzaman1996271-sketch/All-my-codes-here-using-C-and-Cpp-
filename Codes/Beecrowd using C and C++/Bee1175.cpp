#include <iostream>
using namespace std;
int main()
{
    int N[20];
    for(int i=0;i<20;i++){
            cin >> N[i];
}
for(int i=19;i>=0;i--){
        cout << "N["<< (19-i) <<"]" << " = " << N[i]<<endl;
}
return 0;
}

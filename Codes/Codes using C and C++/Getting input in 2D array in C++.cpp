#include <iostream>

using namespace std;

int main(){
int a[3][4];
cout<<"Enter the elements: "<<endl;
cout << endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout << "A["<<i<<"]["<<j<<"]= ";
        cin >> a[i][j];
    }

}
cout << endl;
cout << "Printing the inputs: "<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout << a[i][j]<<" ";

    }
 cout << endl;
}
return 0;
}

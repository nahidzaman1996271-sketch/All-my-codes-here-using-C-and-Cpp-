#include <iostream>
using namespace std;
int main(){
    int arr[10] = {10,20,30,40,50};
int i,pos,n=5,val;
cout <<"The elements are: "<<endl;
for( i = 0; i<n;i++){
    cout << "Array at index " << i << " is " << arr[i] <<endl;
}
cout << endl;
cout << "Enter the position you want to delete: ";
cin >> pos;
cout << endl;
val = arr[pos];
for( i = pos; i<=n;i++){
        arr[i]= arr[i+1];
}
n = n-1;
cout << "The value deleted from the array is: " << val<<endl << endl;
cout <<"Number of array after deletion is: " <<n;
cout << endl;
cout << "Array's after deletion: "<<endl<<endl;
for( i = 0; i<n;i++){
         cout << "Array at index " << i << " is " << arr[i] <<endl;
}
cout << endl;
return 0;
}

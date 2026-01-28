#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,pos,val,n=5;
    int arr[10]={10,20,30,40,50};
    cout << "Elements in the array: " << endl <<endl;
    for(i=0; i<n; i++){
        cout << "Elements in index " << i << " is " << arr[i]<<endl;
    }
    cout << endl;
    cout << "Enter the position you want to enter the value: ";
    cin >> pos;
    cout << endl;
    cout << "Enter the value you want to insert: ";
    cin >> val;
    cout << endl;
    arr[pos] = val;
    for(i = n-1; i>pos; i--){
        arr[i+1]=arr[i];
    }
    n = n+1;
    cout << "Values after insertion: "<<endl;
        for(i=0; i<n; i++){
        cout << "Elements in index " << i << " is " << arr[i]<<endl;
    }
    cout << endl;
    cout << "Total elements after insertion: "<< n <<endl;
    cout << endl;
    cout << "The position you want to delete: ";
    cin >> pos;
    val = arr[pos];
    for(i = pos; i<n;i++){
        arr[i]=arr[i+1];
    }
    n = n-1;
    cout << "The elements after deletion: "<<endl <<endl;
    cout << "The value is deleted is: " << val << endl << endl;
    for(i=0; i<n; i++){
        cout << "Elements in index " << i << " is " << arr[i]<<endl;
    }
    cout <<endl;
    cout << "Total elements in the array is: " << n;
    getch();
}

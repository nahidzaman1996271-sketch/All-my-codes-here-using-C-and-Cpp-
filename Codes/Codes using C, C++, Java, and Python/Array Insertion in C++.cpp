#include <iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,30,40,50};
    int n = 5;
    int i, pos, value;
    cout << "Array elements are: " << endl;
    for(i = 0; i < n; i++){
        cout << endl << "Elements at index " << i << " is " << arr[i];
    }
    cout << endl << endl << "Enter the position or index where you want to insert the new element: ";
    cin >> pos;
    cout  << endl << "Enter the new value or element to insert: ";
    cin >> value;
    for(i=n-1; i>=pos; i--){ // last to the previous position that's why decrement
        arr[i+1] = arr[i]; // current element to the next position
    }
    arr[pos] = value;
    n = n+1;
    cout << endl << "Array after insertion is " << endl;
    for( i=0; i<n; i++ ){
        cout << endl << "Element at index "<< i << " is "<< arr[i];
    }
    cout << endl << endl << "The total length of the array is: "<< n;
}

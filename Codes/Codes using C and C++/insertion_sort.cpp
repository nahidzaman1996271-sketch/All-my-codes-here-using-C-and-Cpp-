#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {      // note: use ; not , in the for loop
        int temp = a[i];               // element to insert
        int j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];           // shift bigger element right
            j--;
        }
        a[j + 1] = temp;               // place temp in its correct spot
    }
}

int main() {
    int a[] = {5, 2, 4, 6, 1, 3};
    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
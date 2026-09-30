#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
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
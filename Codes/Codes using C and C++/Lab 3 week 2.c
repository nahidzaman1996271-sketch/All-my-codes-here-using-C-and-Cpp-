#include <stdio.h>

int main() {
    int arr[10];
    int i, m, k;
    int c1 = 0, c2 = 0;
    int x = 0;

    // Input for linear search
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Linear Search
    printf("Enter value to search (Linear Search): ");
    scanf("%d", &m);

    for (i = 0; i < 10; i++) {
        c1++; // comparison count
        if (arr[i] == m) {
            printf("Target found at position %d (Linear)\n", i + 1);
            x = 1;
            break;
        }
    }
    if (!x) {
        printf("Target not found (Linear)\n");
    }

    // Input sorted array for Binary Search
    int sorted;
    while (1) {
        printf("\nEnter 10 SORTED integers:\n");
        for (i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }

        sorted = 1;
        for (i = 0; i < 9; i++) {
            if (arr[i] > arr[i + 1]) {
                sorted = 0;
                break;
            }
        }

        if (sorted) break;
        printf("Array not sorted! Enter again.\n");
    }

    // Binary Search
    printf("Enter value to search (Binary Search): ");
    scanf("%d", &k);

    int low = 0, high = 9, mid, found = 0;

    while (low <= high) {
        c2++; // comparison count
        mid = (low + high) / 2;

        if (arr[mid] == k) {
            printf("Target found at position %d (Binary)\n", mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] > k) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (!found) {
        printf("Target not found (Binary)\n");
    }

    printf("\nLinear Search comparisons: %d\n", c1);
    printf("Binary Search comparisons: %d\n", c2);

    return 0;
}

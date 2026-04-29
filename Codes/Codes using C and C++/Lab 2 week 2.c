#include <stdio.h>

int main() {
    int arr[10], i, k;
    int sorted;

    // Input loop until sorted
    while (1) {
        printf("Enter 10 sorted integers:\n");
        for (i = 0; i < 10; i++) {
            scanf("%d", &arr[i]);
        }

        // Check sorted
        sorted = 1;
        for (i = 0; i < 9; i++) {
            if (arr[i] > arr[i + 1]) {
                sorted = 0;
                break;
            }
        }

        if (sorted == 1) {
            break;
        } else {
            printf("Array is NOT sorted! Enter again.\n\n");
        }
    }

    // Target input
    printf("Enter target element: ");
    scanf("%d", &k);

    // Binary Search
    int low = 0, high = 9, mid, found = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == k) {
            printf("Target found at position %d\n", mid + 1);
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
        printf("Target element not found!\n");
    }

    return 0;
}

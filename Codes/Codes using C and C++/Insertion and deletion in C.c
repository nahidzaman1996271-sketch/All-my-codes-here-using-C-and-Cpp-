#include <stdio.h>
#include <conio.h>

int main()
{
    int i, pos, val, n = 5;
    int arr[10] = {10, 20, 30, 40, 50};
    printf("Elements in the array:\n\n");
    for (i = 0; i < n; i++) {
        printf("Elements in index %d is %d\n", i, arr[i]);
    }
    printf("\nEnter the position you want to enter the value: ");
    scanf("%d", &pos);

    printf("\nEnter the value you want to insert: ");
    scanf("%d", &val);
    printf("\n");

    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = val;
    n = n + 1;

    printf("Values after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("Elements in index %d is %d\n", i, arr[i]);
    }

    printf("\nTotal elements after insertion: %d\n\n", n);

    printf("The position you want to delete: ");
    scanf("%d", &pos);

    val = arr[pos];

    for (i = pos; i < n; i++) {
        arr[i] = arr[i + 1];
    }

    n = n - 1;

    printf("\nThe elements after deletion:\n\n");
    for (i = 0; i < n; i++) {
        printf("Elements in index %d is %d\n", i, arr[i]);
    }
    printf("\nThe element deleted is: %d\n", val);
    printf("Total elements in the array is: %d\n", n);

    getch();
}


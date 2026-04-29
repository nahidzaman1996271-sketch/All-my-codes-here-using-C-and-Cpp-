#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n], low = 0, high = n - 1, mid, flag = 0, x;

    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &x);

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (A[mid] == x)
        {
            printf("Element found at index: %d\n", mid + 1);
            flag = 1;
            break;
        }
        else if (A[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (flag == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}
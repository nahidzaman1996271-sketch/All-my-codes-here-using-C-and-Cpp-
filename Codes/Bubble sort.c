#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j]     = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
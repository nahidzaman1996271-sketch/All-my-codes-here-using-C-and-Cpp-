#include<stdio.h>
int main()
{
    int a,b;
    printf("Input two values: ");
    scanf("%d %d", &a,&b); // taking two inputs
    int *ptr1 = &a; // *ptr1 stores the address of a
    int *ptr2 = &b; // *ptr2 stores the address of b
    printf("The sum of two variables input using pointer: %d\n", (*ptr1+*ptr2));
    return 0;
}
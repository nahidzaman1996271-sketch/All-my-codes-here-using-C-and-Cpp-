#include <stdio.h>

int main() {

    int var = 10;           // normal variable
    int *ptr1 = &var;       // pointer holding address of var
    int **ptr2 = &ptr1;     // pointer holding address of ptr1
    int ***ptr3 = &ptr2;    // pointer holding address of ptr2

    // Single pointer
    printf("var: %d\n", var);
    printf("ptr1: %p\n", ptr1);       // address of var
    printf("*ptr1: %d\n", *ptr1);     // value of var = 10

    printf("\n");

    // Double pointer
    printf("ptr2: %p\n", ptr2);       // address of ptr1
    printf("*ptr2: %p\n", *ptr2);     // address of var
    printf("**ptr2: %d\n", **ptr2);   // value of var = 10

    printf("\n");

    // Triple pointer
    printf("ptr3: %p\n", ptr3);         // address of ptr2
    printf("*ptr3: %p\n", *ptr3);       // address of ptr1
    printf("**ptr3: %p\n", **ptr3);     // address of var
    printf("***ptr3: %d\n", ***ptr3);   // value of var = 10

    return 0;
}
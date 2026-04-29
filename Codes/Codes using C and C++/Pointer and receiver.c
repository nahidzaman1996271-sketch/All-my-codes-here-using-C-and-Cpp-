#include <stdio.h>

int main() {
    int x = 10;      // sender (normal variable)
    int *p;          // pointer (receiver)

    p = &x;          // pointer receives address of x

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);

    printf("Value stored in pointer p (address): %p\n", p);
    printf("Value at address p points to: %d\n", *p);

    return 0;
}


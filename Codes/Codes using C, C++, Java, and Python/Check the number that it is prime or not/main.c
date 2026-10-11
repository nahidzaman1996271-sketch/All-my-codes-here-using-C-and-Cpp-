#include <stdio.h>

void prime(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers from 1 to %d are:\n", num);
    for (int i = 2; i <= num; i++) {
        prime(i); // check each number
    }

    printf("\n");
    return 0;
}

void prime(int n) {
    if (n <= 1) {
        return; // 0 and 1 are not prime
    }

    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return; // divisor found → not prime
        }
    }

    // If loop completes without returning, n is prime
    printf("%d ", n);
}

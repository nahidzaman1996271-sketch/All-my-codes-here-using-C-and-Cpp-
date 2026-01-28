#include <stdio.h>

int main() {
    int count, x;
    float n, n1, n2, m;

    while (1) {

        count = 0;  // VERY IMPORTANT

        while (count < 2) {
            scanf("%f", &n);

            if (n < 0 || n > 10)
                printf("nota invalida\n");
            else {
                if (count == 0) n1 = n;
                else n2 = n;
                count++;
            }
        }

        m = (n1 + n2) / 2.0;
        printf("media = %.2f\n", m);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while (x != 1 && x != 2);

        if (x == 2) break;
    }

    return 0;
}

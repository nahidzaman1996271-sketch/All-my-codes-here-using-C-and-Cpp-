#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int PA, PB, years = 0;
        double G1, G2;

        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while (PA <= PB && years <= 100) {
            PA += PA * G1 / 100.0;
            PB += PB * G2 / 100.0;
            years++;
        }

        if (years > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", years);
    }

    return 0;
}
// hehe so easy

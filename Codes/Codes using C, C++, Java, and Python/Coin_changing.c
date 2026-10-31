#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned long long ull;

/* Builds the (n+1) x (W+1) table. Row 0 = "no coins": only amount 0 is possible. */
ull **coin_change_table(const int *coins, int n, int W) {
    ull **dp = malloc((n + 1) * sizeof(ull *));
    for (int i = 0; i <= n; i++) {
        dp[i] = calloc(W + 1, sizeof(ull));
        dp[i][0] = 1;
    }

    for (int i = 1; i <= n; i++) {
        int coin = coins[i - 1];
        for (int w = 1; w <= W; w++) {
            ull exclude = dp[i - 1][w];                          /* 1) exclude the coin */
            ull include = (coin <= w) ? dp[i][w - coin] : 0;     /* 2) include the coin */
            dp[i][w] = exclude + include;                        /* 3) add both */
        }
    }
    return dp;
}

void print_table(const int *coins, int n, int W, ull **dp) {
    printf("\ncoins\\W ");
    for (int w = 0; w <= W; w++) printf("%4d", w);
    printf("\n");
    for (int k = 0; k < 8 + 4 * (W + 1); k++) putchar('-');
    printf("\n");

    for (int i = 1; i <= n; i++) {
        printf("%6d |", coins[i - 1]);
        for (int w = 0; w <= W; w++) printf("%4llu", dp[i][w]);
        printf("\n");
    }
}

int main(void) {
    char line[4096];
    int coins[1024];
    int n = 0, W;

    printf("Enter coins (space separated): ");
    if (!fgets(line, sizeof line, stdin)) return 1;

    char *tok = strtok(line, " \t\r\n");
    while (tok && n < 1024) {
        int c = atoi(tok);
        if (c <= 0) {
            fprintf(stderr, "Coin values must be positive integers.\n");
            return 1;
        }
        coins[n++] = c;
        tok = strtok(NULL, " \t\r\n");
    }

    printf("Enter amount W: ");
    if (scanf("%d", &W) != 1 || W < 0) {
        fprintf(stderr, "Invalid amount.\n");
        return 1;
    }

    ull **dp = coin_change_table(coins, n, W);
    print_table(coins, n, W, dp);
    printf("\nNumber of ways to make %d = %llu\n", W, dp[n][W]);

    for (int i = 0; i <= n; i++) free(dp[i]);
    free(dp);
    return 0;
}
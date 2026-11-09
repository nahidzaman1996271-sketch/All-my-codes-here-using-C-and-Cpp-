#include <stdio.h>

struct Item {
    int id;
    double profit;
    double weight;
    double ratio;
};

int main() {
    struct Item items[] = {
        {1, 60, 10, 0},
        {2, 100, 20, 0},
        {3, 120, 30, 0}
    };
    int n = 3;
    double capacity = 50;
    double totalProfit = 0;

    /* compute profit-to-weight ratio */
    for (int i = 0; i < n; i++)
        items[i].ratio = items[i].profit / items[i].weight;

    /* sort items by ratio in descending order */
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].ratio < items[j + 1].ratio) {
                struct Item temp = items[j];
                items[j] = items[j + 1];
                items[j + 1] = temp;
            }
        }
    }

    printf("Items sorted by profit/weight ratio:\n");
    for (int i = 0; i < n; i++)
        printf("Item %d: profit=%.0f weight=%.0f ratio=%.2f\n",
               items[i].id, items[i].profit, items[i].weight, items[i].ratio);

    /* greedy selection */
    printf("\nSelected items:\n");
    for (int i = 0; i < n && capacity > 0; i++) {
        if (items[i].weight <= capacity) {
            capacity -= items[i].weight;
            totalProfit += items[i].profit;
            printf("Item %d: taken fully\n", items[i].id);
        } else {
            double fraction = capacity / items[i].weight;
            totalProfit += items[i].profit * fraction;
            printf("Item %d: taken %.2f of it (%.0f units)\n",
                   items[i].id, fraction, capacity);
            capacity = 0;
        }
    }

    printf("\nTotal maximum profit = %.2f\n", totalProfit);
    return 0;
}

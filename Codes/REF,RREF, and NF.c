
#include <stdio.h>
#define MAX 10

int rows, cols;
float a[MAX][MAX];

void printMatrix(const char *title) {
    int i, j;
    printf("\n%s\n", title);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%8.2f ", a[i][j]);
        }
        printf("\n");
    }
}

/* Convert matrix to REF */
void toREF() {
    int i, j, k;
    float factor;

    for (i = 0; i < rows && i < cols; i++) {

        if (a[i][i] == 0)
            continue;

        for (j = i + 1; j < rows; j++) {
            factor = a[j][i] / a[i][i];
            printf("\nR%d → R%d − (%.2f)R%d\n", j + 1, j + 1, factor, i + 1);

            for (k = 0; k < cols; k++) {
                a[j][k] -= factor * a[i][k];
            }
            printMatrix("After Row Operation");
        }
    }
}

/* Convert matrix to RREF */
void toRREF() {
    int i, j, k;
    float factor;

    for (i = 0; i < rows && i < cols; i++) {

        if (a[i][i] != 0) {
            factor = a[i][i];
            printf("\nR%d → R%d / %.2f\n", i + 1, i + 1, factor);

            for (k = 0; k < cols; k++)
                a[i][k] /= factor;

            printMatrix("After Making Pivot 1");
        }

        for (j = 0; j < rows; j++) {
            if (j != i && a[j][i] != 0) {
                factor = a[j][i];
                printf("\nR%d → R%d − (%.2f)R%d\n", j + 1, j + 1, factor, i + 1);

                for (k = 0; k < cols; k++)
                    a[j][k] -= factor * a[i][k];

                printMatrix("After Row Operation");
            }
        }
    }
}

/* Display Normal Form */
void showNF(int rank) {
    int i, j;
    printf("\nNF (Normal Form)\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i < rank && j < rank && i == j)
                printf(" 1 ");
            else
                printf(" 0 ");
        }
        printf("\n");
    }
}

int main() {
    int i, j;
    int rank = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter matrix elements row-wise:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    printMatrix("Original Matrix");

    printf("\n--- CONVERTING TO REF ---\n");
    toREF();
    printMatrix("REF Matrix");

    printf("\n--- CONVERTING TO RREF ---\n");
    toRREF();
    printMatrix("RREF Matrix");

    /* Calculate Rank */
    for (i = 0; i < rows; i++) {
        int nonZero = 0;
        for (j = 0; j < cols; j++) {
            if (a[i][j] != 0) {
                nonZero = 1;
                break;
            }
        }
        if (nonZero)
            rank++;
    }

    printf("\nRank of the matrix = %d\n", rank);

    showNF(rank);

    return 0;
}

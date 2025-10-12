//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("\nMatrix multiplication not possible!\n");
        printf("Number of columns of first matrix must equal number of rows of second matrix.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], Product[r1][c2];

    printf("\nEnter elements of first matrix (A):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements of second matrix (B):\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            Product[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                Product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices (A × B):\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", Product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int n;

    printf("Enter the order of the matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int diagonal[n];
    int count = 0;
    int isDistinct = 1;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        diagonal[i] = matrix[i][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diagonal[i] == diagonal[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }

    if (isDistinct)
        printf("\nAll diagonal elements are distinct.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}

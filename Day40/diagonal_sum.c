#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[10][10];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find diagonal sum
    for(int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Diagonal Sum = %d", sum);

    return 0;
}
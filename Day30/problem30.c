#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Condition for multiplication
    if(c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int A[10][10], B[10][10], Result[10][10];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize result matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            Result[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                Result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Result Matrix:\n");

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", Result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
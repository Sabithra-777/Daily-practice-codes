#include <stdio.h>

int main()
{
    int n;
    int primarySum = 0, secondarySum = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        primarySum += matrix[i][i];
        secondarySum += matrix[i][n - i - 1];
    }

    printf("Primary Diagonal Sum = %d\n", primarySum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);

    return 0;
}
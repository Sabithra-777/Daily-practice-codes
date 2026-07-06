#include <stdio.h>

int main()
{
    int n;

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

    // Transpose the matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    // Reverse each row
    for(int i = 0; i < n; i++)
    {
        int left = 0, right = n - 1;

        while(left < right)
        {
            int temp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = temp;

            left++;
            right--;
        }
    }

    printf("Matrix after 90-degree clockwise rotation:\n");

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
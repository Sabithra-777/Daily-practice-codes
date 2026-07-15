#include <stdio.h>

int main()
{
    int n;
    int isMagic = 1;

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

    int targetSum = 0;

    // Sum of first row
    for(int j = 0; j < n; j++)
        targetSum += matrix[0][j];

    // Check rows
    for(int i = 1; i < n; i++)
    {
        int rowSum = 0;

        for(int j = 0; j < n; j++)
            rowSum += matrix[i][j];

        if(rowSum != targetSum)
        {
            isMagic = 0;
            break;
        }
    }

    // Check columns
    if(isMagic)
    {
        for(int j = 0; j < n; j++)
        {
            int colSum = 0;

            for(int i = 0; i < n; i++)
                colSum += matrix[i][j];

            if(colSum != targetSum)
            {
                isMagic = 0;
                break;
            }
        }
    }

    // Check diagonals
    if(isMagic)
    {
        int primary = 0, secondary = 0;

        for(int i = 0; i < n; i++)
        {
            primary += matrix[i][i];
            secondary += matrix[i][n - i - 1];
        }

        if(primary != targetSum || secondary != targetSum)
            isMagic = 0;
    }

    if(isMagic)
        printf("Magic Square");
    else
        printf("Not a Magic Square");

    return 0;
}
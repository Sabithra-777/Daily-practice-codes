#include <stdio.h>

int main()
{
    int rows, cols;
    int found = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < rows; i++)
    {
        int minCol = 0;

        // Find minimum element in the row
        for(int j = 1; j < cols; j++)
        {
            if(matrix[i][j] < matrix[i][minCol])
                minCol = j;
        }

        // Check if it is the largest in its column
        int isSaddle = 1;

        for(int k = 0; k < rows; k++)
        {
            if(matrix[k][minCol] > matrix[i][minCol])
            {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle)
        {
            printf("Saddle Point = %d\n", matrix[i][minCol]);
            found = 1;
        }
    }

    if(!found)
        printf("No Saddle Point");

    return 0;
}
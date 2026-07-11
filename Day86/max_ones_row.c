#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter binary matrix elements:\n");

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxOnes = -1;
    int rowIndex = -1;

    for(int i = 0; i < rows; i++)
    {
        int count = 0;

        for(int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 1)
                count++;
        }

        if(count > maxOnes)
        {
            maxOnes = count;
            rowIndex = i;
        }
    }

    if(rowIndex != -1)
        printf("Row with maximum 1s = %d", rowIndex);
    else
        printf("No 1s found");

    return 0;
}
#include <stdio.h>

int main()
{
    int rows, cols;

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

    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int row = 0;
    int col = cols - 1;

    while(row < rows && col >= 0)
    {
        if(matrix[row][col] == key)
        {
            printf("Element found at (%d, %d)", row, col);
            return 0;
        }
        else if(matrix[row][col] > key)
        {
            col--;
        }
        else
        {
            row++;
        }
    }

    printf("Element not found");

    return 0;
}
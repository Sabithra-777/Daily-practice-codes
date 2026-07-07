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

    printf("Boundary Traversal:\n");

    // Top row
    for(int j = 0; j < cols; j++)
        printf("%d ", matrix[0][j]);

    // Right column
    for(int i = 1; i < rows; i++)
        printf("%d ", matrix[i][cols - 1]);

    // Bottom row
    if(rows > 1)
    {
        for(int j = cols - 2; j >= 0; j--)
            printf("%d ", matrix[rows - 1][j]);
    }

    // Left column
    if(cols > 1)
    {
        for(int i = rows - 2; i > 0; i--)
            printf("%d ", matrix[i][0]);
    }

    return 0;
}
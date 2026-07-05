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

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    printf("Spiral Traversal:\n");

    while(top <= bottom && left <= right)
    {
        // Left to Right
        for(int i = left; i <= right; i++)
            printf("%d ", matrix[top][i]);
        top++;

        // Top to Bottom
        for(int i = top; i <= bottom; i++)
            printf("%d ", matrix[i][right]);
        right--;

        // Right to Left
        if(top <= bottom)
        {
            for(int i = right; i >= left; i--)
                printf("%d ", matrix[bottom][i]);
            bottom--;
        }

        // Bottom to Top
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
                printf("%d ", matrix[i][left]);
            left++;
        }
    }

    return 0;
}
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

    int smallest = matrix[0][0];
    int largest = matrix[0][0];

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(matrix[i][j] < smallest)
                smallest = matrix[i][j];

            if(matrix[i][j] > largest)
                largest = matrix[i][j];
        }
    }

    printf("Smallest Element = %d\n", smallest);
    printf("Largest Element = %d\n", largest);

    return 0;
}
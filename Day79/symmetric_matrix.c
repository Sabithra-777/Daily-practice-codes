#include <stdio.h>

int main()
{
    int n;
    int isSymmetric = 1;

    printf("Enter the size of square matrix: ");
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
        for(int j = i + 1; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }

        if(!isSymmetric)
            break;
    }

    if(isSymmetric)
        printf("Symmetric Matrix");
    else
        printf("Not a Symmetric Matrix");

    return 0;
}
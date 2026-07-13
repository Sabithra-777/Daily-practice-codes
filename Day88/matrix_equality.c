#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols];
    int equal = 1;

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(A[i][j] != B[i][j])
            {
                equal = 0;
                break;
            }
        }

        if(!equal)
            break;
    }

    if(equal)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");

    return 0;
}
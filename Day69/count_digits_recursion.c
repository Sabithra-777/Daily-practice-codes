#include <stdio.h>

int countDigits(int n)
{
    if(n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0)
        printf("Number of digits = 1");
    else
        printf("Number of digits = %d", countDigits(n));

    return 0;
}
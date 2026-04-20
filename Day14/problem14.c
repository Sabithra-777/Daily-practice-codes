#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Method 1: Using temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping (using temp): a = %d, b = %d", a, b);

    // Method 2: Without using temp
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping again (without temp): a = %d, b = %d", a, b);

    return 0;
}
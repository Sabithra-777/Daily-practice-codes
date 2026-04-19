#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, result = 0, digits = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    // Count digits
    while(n != 0) {
        digits++;
        n = n / 10;
    }

    n = original;

    // Calculate Armstrong
    while(n != 0) {
        remainder = n % 10;
        result += pow(remainder, digits);
        n = n / 10;
    }

    if(result == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
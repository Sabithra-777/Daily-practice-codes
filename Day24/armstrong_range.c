#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++) {
        int num = i, digits = 0, result = 0, remainder;

        // Count digits
        while(num != 0) {
            digits++;
            num /= 10;
        }

        num = i;

        // Calculate Armstrong
        while(num != 0) {
            remainder = num % 10;
            result += pow(remainder, digits);
            num /= 10;
        }

        if(result == i)
            printf("%d ", i);
    }

    return 0;
}
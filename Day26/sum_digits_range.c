#include <stdio.h>

int main() {
    int start, end;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++) {
        int num = i, sum = 0, remainder;

        while(num != 0) {
            remainder = num % 10;
            sum += remainder;
            num /= 10;
        }

        printf("%d -> %d\n", i, sum);
    }

    return 0;
}
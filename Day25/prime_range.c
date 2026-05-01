#include <stdio.h>

int main() {
    int start, end;

    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    for(int i = start; i <= end; i++) {
        int isPrime = 1;

        if(i <= 1)
            isPrime = 0;
        else {
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if(isPrime)
            printf("%d ", i);
    }

    return 0;
}
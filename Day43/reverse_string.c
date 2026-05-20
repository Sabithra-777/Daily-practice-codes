#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find string length
    while(str[length] != '\0') {
        length++;
    }

    printf("Reversed string: ");

    // Print in reverse order
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
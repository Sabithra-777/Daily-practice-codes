#include <stdio.h>

int main() {
    char str[100];
    int length = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find string length
    while(str[length] != '\0') {
        length++;
    }

    int start = 0;
    int end = length - 1;

    // Compare characters
    while(start < end) {

        if(str[start] != str[end]) {
            flag = 0;
            break;
        }

        start++;
        end--;
    }

    if(flag)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}
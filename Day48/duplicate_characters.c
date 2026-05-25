#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;

    // Count frequency
    while(str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

    printf("Duplicate characters:\n");

    for(i = 0; i < 256; i++) {
        if(freq[i] > 1) {
            printf("%c\n", i);
        }
    }

    return 0;
}

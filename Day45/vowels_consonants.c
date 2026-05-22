#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0') {

        char ch = str[i];

        // Convert uppercase to lowercase manually
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if((ch >= 'a' && ch <= 'z')) {

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}
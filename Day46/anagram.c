#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0};
    int freq2[26] = {0};
    int i = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Count frequency for first string
    while(str1[i] != '\0') {

        char ch = str1[i];

        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        freq1[ch - 'a']++;
        i++;
    }

    i = 0;

    // Count frequency for second string
    while(str2[i] != '\0') {

        char ch = str2[i];

        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        freq2[ch - 'a']++;
        i++;
    }

    // Compare frequencies
    for(i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Strings are Anagrams");
    else
        printf("Strings are NOT Anagrams");

    return 0;
}
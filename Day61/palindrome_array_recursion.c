#include <stdio.h>

int isPalindrome(int arr[], int start, int end) {

    if(start >= end)
        return 1;

    if(arr[start] != arr[end])
        return 0;

    return isPalindrome(arr, start + 1, end - 1);
}

int main() {

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(isPalindrome(arr, 0, n - 1))
        printf("Palindrome Array");
    else
        printf("Not a Palindrome Array");

    return 0;
}
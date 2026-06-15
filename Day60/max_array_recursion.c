#include <stdio.h>

int findMax(int arr[], int n) {

    if(n == 1)
        return arr[0];

    int maxOfRest = findMax(arr, n - 1);

    if(arr[n - 1] > maxOfRest)
        return arr[n - 1];

    return maxOfRest;
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

    printf("Maximum Element = %d", findMax(arr, n));

    return 0;
}
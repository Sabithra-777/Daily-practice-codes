#include <stdio.h>

int isSorted(int arr[], int n) {

    if(n == 1)
        return 1;

    if(arr[n - 2] > arr[n - 1])
        return 0;

    return isSorted(arr, n - 1);
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

    if(isSorted(arr, n))
        printf("Array is Sorted");
    else
        printf("Array is Not Sorted");

    return 0;
}
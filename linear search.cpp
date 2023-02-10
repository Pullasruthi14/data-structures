#include <stdio.h>

int linear_search(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    int result = linear_search(arr, n, element);
    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}



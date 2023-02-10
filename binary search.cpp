#include <stdio.h>

int binary_search(int arr[], int low, int high, int element) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == element) {
            return mid;
        } else if (arr[mid] > element) {
            return binary_search(arr, low, mid - 1, element);
        } else {
            return binary_search(arr, mid + 1, high, element);
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element you want to search: ");
    scanf("%d", &element);

    int result = binary_search(arr, 0, n - 1, element);
    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}


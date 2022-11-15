#include <stdio.h>

int bin_Search(int arr[], int x, int min, int max) {

while (min <= max) {
    int mid = min + (max - min) / 2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] < x)
        min = mid + 1;
    else
    max = mid - 1;
    }
    return -1;
}

int main(void) {
    int arr[] = {3, 4, 5, 6, 7, 8, 9}, x = 4, result, n;
    n = sizeof(arr) / sizeof(arr[0]);
    result = bin_Search(arr, x, 0, n - 1);
    if (result == -1)
        printf("Item is not found");
    else
        printf("Item is found at index %d", result);
    return 0;
    } 
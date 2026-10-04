/*2.
Givena sorted array Arr.
Find the first occurrence of K.
If found then return index else return -1*/

#include <stdio.h>

int firstOccurrence(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {2, 3, 3, 3, 6, 9, 10, 11, 14, 18};
    int n = 10;
    int k;

    printf("Enter K: ");
    scanf("%d", &k);

    printf("Index = %d", firstOccurrence(arr, n, k));

    return 0;
}
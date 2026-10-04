/*3. Given an array with a Distinct element, which is formed by rotating
a sorted array K times.
Given an X element.
Find its index of it in the given array.
[Note: K value not given]
*/

#include <stdio.h>

int searchRotated(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[low] <= arr[mid]) {
            if (arr[low] <= x && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (arr[mid] < x && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {10, 11, 14, 18, 2, 3, 6, 9};
    int n = 8;
    int x;

    printf("Enter X: ");
    scanf("%d", &x);

    printf("Index = %d", searchRotated(arr, n, x));

    return 0;
}
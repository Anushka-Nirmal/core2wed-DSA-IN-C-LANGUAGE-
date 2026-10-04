/*1.
Given a sorted array with DISTINCT elements.
Find the floor of no K in the array.
floor => greatest element <= K
input: Arr[2,3,6,9,10,11,14,18]:
output:
K=5 floor = 3
K=4 floor = 3
K=6 floor = 6
*/

#include <stdio.h>

int findFloor(int arr[], int n, int k) {
    int low = 0;
    int high = n - 1;
    int floor = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k) {
            return arr[mid];
        }
        else if (arr[mid] < k) {
            floor = arr[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return floor;
}

int main() {
    int arr[] = {2, 3, 6, 9, 10, 11, 14, 18};
    int n = 8;
    int k;

    printf("Enter K: ");
    scanf("%d", &k);

    printf("Floor = %d", findFloor(arr, n, k));

    return 0;
}

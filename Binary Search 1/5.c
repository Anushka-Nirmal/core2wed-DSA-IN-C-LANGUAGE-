/*5. Sorted Insert Position
index
order.
Problem Description:
- Given a sorted array A of size N and a target value B, return the
(0-based Indexing) if the target is found.
-If not, return the index where it would be if it were Inserted in
NOTE:
- You may assume no duplicates in the array.
Problem Constraints:
1 <= N <= 106
Example Input:
Input 1:
A= [1, 3, 5, 6]
B=5
Output 1:
2
Input 2:
A= [1, 3, 5, 7]
B=6
Output 2:
3
*/

#include <stdio.h>

int searchInsert(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

int main() {
    int arr[] = {1, 3, 5, 6};
    int n = 4;
    int target;

    printf("Enter target: ");
    scanf("%d", &target);

    printf("Index = %d", searchInsert(arr, n, target));

    return 0;
}
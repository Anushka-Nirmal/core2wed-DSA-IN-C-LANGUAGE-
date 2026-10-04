/*7: Search for a range
Problem Description:
- Given a sorted array of integers A(0 based index) of size N,
find the starting and the ending position of a given integer B in
array A.
- Return an array of size 2, such that the
first element = starting position of B in A
the second element = ending position of B in A.
-If B is not found in A return [-1, -1].
Problem Constraints:
1 <= N <= 106
1 <= A[i], В <= 109
Input Format :
-The first argument given is the integer array A.
-The second argument given is the integer B.
Example Input:
Input 1:
A= [5, 7, 7, 8, 8, 10] View Solution B=8
4
σ Scanned with OKEN Scanner
Binary Search
Input 1:
A= [5, 7, 7, 8, 8, 10]
B=8
Output 1:
[3, 4]
Input 2:
A= [5, 17, 100, 111]
B=3
Output 2:
[-1,-1]
Input 3:
A = [3, 5, 7, 9, 11]
B=7
Output 3:
*/

#include <stdio.h>

int firstOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

int lastOccurrence(int arr[], int n, int target) {
    int low = 0;
    int high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int arr[] = {5, 7, 7, 8, 8, 10};
    int n = 6;
    int B;

    printf("Enter B: ");
    scanf("%d", &B);

    printf("[%d, %d]",
           firstOccurrence(arr, n, B),
           lastOccurrence(arr, n, B));

    return 0;
}
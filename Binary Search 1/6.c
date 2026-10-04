/*6: Find a peak element(Think once before using Binary search)
Problem Description :
In it.
- Given an array of integers A, find and return the peak element
- An array element Is peak If It is NOT smaller than its nelghbors.
- For corner elements, we need to conslder only one neighbor.
-We ensure that the answer will be unique.
NOTE: The array may have duplicate elements.
Problem Constraints:
1 <= JA| <= 100000
1 <= A[i] <= 109
View Solution
Input Format:
3
σ Scanned with OKEN Scanner
Binary Search
Input Format:
The only argument given is the integer array A.
Output Format:
Return the peak element
Example Input:
Input 1:
A= [1, 2, 3, 4, 5]
Output 1:
5
Input 2:
A= [5, 17, 100, 11]
Output 2:
100*/

#include <stdio.h>

int findPeak(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1])
            low = mid + 1;
        else
            high = mid;
    }

    return arr[low];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Peak Element = %d", findPeak(arr, n));

    return 0;
}
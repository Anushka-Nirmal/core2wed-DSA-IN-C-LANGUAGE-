/*4. Single Element in Sorted Array
Problem Description:
- Given a sorted array of integers A where every element
appears twice
except for one element which appears once, find and return
this single element that appears only once.
Problem Constraints
1 <= JA] <= 100000
1 <= A[i] <= 10^9
Example Input:
Input 1:
A= [1,1, 7]
Output 1:
7
Input 2:
A= [2,3, 3]
Output 2
2*/

#include <stdio.h>

int singleElement(int arr[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (mid % 2 == 1)
            mid--;

        if (arr[mid] == arr[mid + 1])
            low = mid + 2;
        else
            high = mid;
    }

    return arr[low];
}

int main() {
    int arr[] = {1, 1, 7};
    int n = 3;

    printf("Single Element = %d", singleElement(arr, n));

    return 0;
}
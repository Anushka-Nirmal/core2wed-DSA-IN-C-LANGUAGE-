/*Q23. Leaders in Array:
Problem Description:
- Given an Integer array A containing N distinct integers, you have to find all the leaders in array A.
-An element is a leader if it is strictly greaterthan all the elements to
its right side.
NOTE: The rightmost element is always a leader.
NOTE: Ordering in the output doesn't matter.
Example Input
A= [16, 17, 4, 3, 5, 21
Example Output
[17, 2, 5]*/

#include <stdio.h>

int main() {
    int A[] = {16, 17, 4, 3, 5, 2};
    int n = 6;

    int leaders[6];
    int count = 0;
    int max = A[n - 1];

    leaders[count++] = A[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        if (A[i] > max) {
            max = A[i];
            leaders[count++] = A[i];
        }
    }

    printf("Leaders: ");

    for (int i = 0; i < count; i++) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
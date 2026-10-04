/*Q2. Leaders In Array:
Problem Description:
Given an integer array A contalning N distinct Integers, you have to find all the leaders In array A.
-An element is a leader if it is strictly greater than all the elements to It's on the right side.
NOTE: The rightmost element is always a leader.
NOTE: Ordering in the output doesn't matter.
Problem Constralnts
1 <= N <= 105
1 <= A[i] <= 108
Example Input
A= [16, 17, 4, 3, 5, 2]
Example Output
(17,2,5]
Example Explanation
-Element 17 is strictly greater than all the elements on the right side to it.
- Element 2 is strictly greater than all the elements on the right side to it.
- Element 5 is strictly greater than all the elements on the right side to it. So we will return this three elements i.e [17, 2, 5], we can also return
[2, 5, 17] оr [5, 2, 17] or any other ordering.
*/

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
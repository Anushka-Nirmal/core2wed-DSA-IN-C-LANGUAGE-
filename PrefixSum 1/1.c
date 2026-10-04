/*Q1. In place prefix sum
- Given an array A of N Integers.
-Construct the prefix sum of the array In the given array Itself.
- Return an array of Integers denoting the prefix sum of the given array.
Problem Constralnts
1 <= N <= 105
1 <= A[i] <= 103
Input 1:
A= [1, 2, 3, 4, 5]
Output 1:
[1, 3, 6, 10, 15]
Explanation 1:
The prefix sum array of [1, 2, 3, 4, 5] is [1, 3, 6, 10, 15].
Input 2:
A= [4, 3, 21
Output 2:
14, 7,9]
Explanation 2:
The prefix sum array of [4, 3, 2] is [4, 7, 9].*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 1; i < n; i++) {
        A[i] = A[i] + A[i - 1];
    }

    printf("Prefix Sum: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
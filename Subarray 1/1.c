/*Q1. Sum of All Subarrays
Problem Description
- You are given an Integer array A of length N.
- You have to find the sum of all subarray sums of A.
- Return a single Integer denoting the sum of all subarray sums of the given
array.
Example Input
Input 1:
A= [1, 2, 3]
Output 1:
20
Input 2:
A= [2, 1, 31
Output 2:
19
Example Explanation
Explanation 1:
- The different subarrays for the given array are:
[1]. [2], [3]. [1, 2], [2, 3], [1, 2, 3].
-Their sums are: 1 +2+3+3+5+6 = 20
Explanation 2:
Similiar to the first example, the sum of all subarray sums for this array is 19.
*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3};
    int n = 3;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + A[i] * (i + 1) * (n - i);
    }

    printf("%d", sum);

    return 0;
}

/*Q24. The sum of All Subarrays
Problem Description
Add Link
-You are given an integer array A of length N.
- You have to find the sum of all subarray sums of A.
- Return a single integer denoting the sum of all subarray sums of the given
array.
Example Input
Input 1:
A=[1,2, 3
Output 1:
20
Input 2:
A=[2,1,3]
Output 2
19
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
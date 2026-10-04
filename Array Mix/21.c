/*Q21. Range Sum Query
Problem Description
-You are given an integer array A of length N.
-You are also given a 2D integer array B with dimensions M x 2, where each
row denotes a [L, R] query.
-For each query, you have to find the sum of allelements from L to R
Indices in A (0- Indexed).
-More formally, find A[L] + A[L + 1] + A[L + 2] +... + A[R - 1] + A[R] for
each query.
Input Format
-The first argument is the integer array A.
-The second argument is the 2D Integer array B.
Output Format
- Return an Integer array of length M where the Ith element is the answer for
ith query in B.
Example Input
Input 1:
A=[1.2, 3.4.5]
B = [10, 3]. [1, 2
Input 2:
A12, 2. 2]
B=[[0. 0]. [1. 2
Example Output
Output 1:
[10.5)
Output 2:
(2.4)
*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    int B[2][2] = {
        {0, 3},
        {1, 2}
    };

    int q = 2;
    int prefix[5];

    prefix[0] = A[0];

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + A[i];
    }

    printf("Output: ");

    for (int i = 0; i < q; i++) {
        int left = B[i][0];
        int right = B[i][1];
        int sum;

        if (left == 0)
            sum = prefix[right];
        else
            sum = prefix[right] - prefix[left - 1];

        printf("%d ", sum);
    }

    return 0;
}
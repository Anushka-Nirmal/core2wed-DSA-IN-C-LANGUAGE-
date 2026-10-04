/*Q4. Minor Diagonal Sum
Problem Description:
- You are given a N X N Integer matrix.
- You have to find the sum of all the minor diagonal elements of A.
- Minor diagonal of a MX M matrix A is a collection of elements
A[I, j] such that i + j = M + 1 (where I, J are 1-based).
- Return an Integer denoting the sum of minor diagonal elements.
Problem Constraints:
1 <= N <= 103
-1000 <= A[i]] <= 1000
Input 1:
A= [[1, -2, -3].
[-4, 5, -6].
[-7,-8, 9]]
Output 1:
-5
Input 2:
A= [[3, 2].
[2, 3]
Output 2:
4
Example Explanation:
Explanation 1:
A[1][3] + A2|[2] + A{3][1] = (-3) + 5 + (-7) =-5
Explanation 2:
A[1][2] + A[2][1] = 2 + 2 4*/

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, -2, -3},
        {-4, 5, -6},
        {-7, -8, 9}
    };

    int n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i][n - 1 - i];
    }

    printf("Minor Diagonal Sum = %d", sum);

    return 0;
}
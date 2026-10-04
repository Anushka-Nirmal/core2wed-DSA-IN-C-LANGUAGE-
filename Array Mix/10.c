/*Q10. Minor Dlagonal Sum
Problem Description:
- You are given a NX N integer matrix.
- You have to find the sum of all the minor diagonal elements of A.
- Minor dlagonal of a M X M matrix A Is a collection of elements
Al, J] such that 1 +J = M+1 (where I, j are 1-based).
- Return an Integer denoting the sum of minor diagonal elements.
Input 1:
A= [[1, -2, -3],
[-4, 5, -6],
[-7,-8, 9]]
Output 1:
-5
Input 2:
A= [[3, 2]
[2, 3]]
Output 2:
Example Explanation:
Explanation 1:
A[1][3] + A2][2] + A[3][1] = (-3) + 5 + (-7) = -5*/

#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, -2, -3},
        {-4, 5, -6},
        {-7, -8, 9}
    };

    int n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + A[i][n - 1 - i];
    }

    printf("%d", sum);

    return 0;
}
/*Q9: Maln Dlagonal sum
Problem Description:
-You are given a N X N Integer matrix.
-You have to find the sum of all the maln diagonal elements of A.
-The main dlagonal of a matrix A is a collection of elements A[I, J]
such that I = j.
-Return an integer denoting the sum of main dlagonal elements.
Input 1:
331-2-3-45-6-7-89
Output 1:
15
Input 2:
22322 3
Output 2:
6
Example Explanation:
"Explanation 1:
A[1][1] + A[2][2] + A[3][3]=1+5+9=15
Explanation 2:
A[1][1] + A[2][2] = 3 + 3 = 6*/

#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + A[i][i];
    }

    printf("%d", sum);

    return 0;
}
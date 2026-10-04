/*Q3: Main Diagonal sum
Problem Description :
- You are given a N X N integer matrix.
- You have to find the sum of all the main diagonal elements of A.
- The main diagonal of a matrix A is a collection of elements A[i, j]
such that i=j.
- Return an integer denoting the sum of main diagonal elements.
Problem Constraints:
1 <= N <= 103
-1000 <= A[i]|] <= 1000
Input 1:
331-2-3-45-6-7-89
Output 1:
15
Input 2:
223223
Output 2:
6
Example Explanation:
Explanation 1:
A[1][1] + A[2][2] + A[3][3] = 1+5+9 = 15
Explanation 2:
A[1][1] + A[2][2] = 3 + 3-6*/

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i][i];
    }

    printf("Main Diagonal Sum = %d", sum);

    return 0;
}
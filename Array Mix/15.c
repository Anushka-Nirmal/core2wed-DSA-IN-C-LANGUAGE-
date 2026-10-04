/*Q15. Add the matrices
Problem Description:
-You are given two matrices A & B of the same size, you have to retum
another matrix which is the sum of A and B.
Example Input:
Input:
A= [[1,2, 3].
[4. 5, 6].
[7,8, 9]]
B = [(9, 8, 71.
[6, 5, 4],
[3, 2, 1]]
Output:
[[10, 10, 10t
[10, 10, 10t
[10, 10, 10]*/

#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int rows = 3;
    int cols = 3;

    printf("Output:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

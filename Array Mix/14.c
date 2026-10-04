/*Q14. Are Matrices the same?
Problem Description:
- You are given two matrices A & B of equal dimensions and you have to
check whether the two matrices are equal or not.
- Return 1 if both matrices are equal or return 0.
NOTE: Both matrices are equal if A[i]U] == B[]U] for all i and j
in the given range.
Example Input
Input 1:
A= [[1, 2, 3],[4, 5, 6),[7, 8, 9]]
B = [[1, 2, 3] [4, 5, 6],[7, 8, 9]]
Output 1:
1
Input 2:
A= [[1, 2, 3),[4, 5, 6][7, 8, 9]]
B = [[1, 2, 3],[7, 8, 9][4, 5. 6]]
Output 2:
0
*/

#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {1, 2, 3},
        {7, 8, 9},
        {4, 5, 6}
    };

    int rows = 3;
    int cols = 3;
    int same = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] != B[i][j]) {
                same = 0;
                break;
            }
        }

        if (same == 0)
            break;
    }

    printf("%d", same);

    return 0;
}
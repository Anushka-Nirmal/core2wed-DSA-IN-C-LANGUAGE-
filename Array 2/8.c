/*Q8. Are Matrices the same?
Problem Description:
-You are given two matrices A & B of equal dimensions and you have to
check whether the two matrices are equal or not.
- Return 1 if both matrices are equal or return 0.
NOTE: Both matrices are equal if A[][] == B[i][i] for all i and ]
in the given range.
Problem Constraints:
1 <= A.size(), B.size() <= 1000
1 <= A[i] size(), B[i].size() <= 1000
1 <= A[ilu]. B[i][j] <= 1000
Example Input:
Input 1:
A= [[1, 2, 3] [4, 5, 6).17, 8, 9)]
B= [[1, 2, 3].[4, 5, 6).[7, 8, 9]]
Output 1:
1
Input 2:
A= [[1, 2, 3].[4, 5, 6).[7, 8, 9]]
B = [[1, 2, 3].[7, 8, 9].[4, 5, 6]]
Output 2:
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
        {4, 5, 6},
        {7, 8, 9}
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
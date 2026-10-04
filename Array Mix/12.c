/*Q12. Matrix Transpose
Problem Description:
-You are given a matrix A, and you have to return another matrix which is the
transpose of A.
- You have to return the Transpose of this 2D matrix.
NOTE: Transpose of a matrix A Is deflned as -AT[ = A[]; Where 1 ≤i≤ col
and 1 ≤] ≤ row. The transpose of a matrix switches the element at (i, j)th index to (j, i)th index, and the element at (J, I)th Index to (i, J)th Index.
Input:
A= [[1, 2, 3] [4, 5, 6] [7, 8, 9]]
Output:
[[1, 4, 7], [2, 5, 8), [3, 6, 91]
Explanation :
-after converting rows to columns and columns to rows of
[[1, 2, 3] [4, 5, 6] [7, 8, 9)}
we will get [[1, 4. 7). (2. 5, 8) [3 6, 9)]
*/

#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    printf("Transpose:\n");

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
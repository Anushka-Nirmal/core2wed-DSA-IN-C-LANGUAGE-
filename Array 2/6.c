/*Q6. Matrix Transpose
23
G Add Link
Problem Description:
- You are given a matrix A, and you have to return another matrix which is the
transpose of A.
-You have to return the Transpose of this 2D matrix.
NOTE: Transpose of a matrix A is defined as - AT[][] = AU][]; Where 1 ≤is col
and 1 ≤j s row. The transpose of a matrix switches the element at (i, j)th index to (j, i)th
index, and the element at (j, i)th index to (I, j)th index.
Problem Constraints:
1 <= A.size() <= 1000
1 <= A[i].size() <= 1000
1 <=Ai]] <= 1000
Input:
A= [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
Output:
[[1,4, 7]. [2,5, 8], [3, 6, 6]]
Explanation:
- after converting rows to columns and columns to rows of
[[1, 2, 3].[4, 5, 6],[7, 8, 9]]
we will get [[1, 4, 7], [2, 5, 8], [3, 6, 91].*/

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    printf("Transpose:\n");

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
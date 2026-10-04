/*Q9. Add the matrices
Problem Description:
- You are given two matrices A & B of same size, you have to return
another matrix which is the sum of A and B.
Problem Constraints:
1 <= A.size(), B.size() <= 1000
1 <= A[i].size(), B[i].size() <= 1000
1 <= A[i][i], B[i][]] <= 1000
Example Input:
Input:
A= [[1, 2, 3],
[4, 5, 6].
[7, 8, 9]]
B = [[9, 8, 7].
[6, 5, 4],
[3,2, 1]]
Output:
[[10. 10, 10).
[10, 10, 10],
[10, 10, 101
Example Explanation
A+8= [[1+9, 2+8, 3+71(4+6. 5+5, 6+4]7+3.8+2, 9+1]]= [[10, 10, 101.
[10. 10. 10). [10, 10, 10
*/

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

    printf("Sum of Matrices:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
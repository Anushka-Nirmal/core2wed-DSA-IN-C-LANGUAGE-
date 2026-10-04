/*Q10. Row to column zero
Problem Description:
- You are given a 2D integer matrix A, make all the elements in a row or
column zero if the A[]] = 0.
- Specifically, make the entire ith row and the jth column zeroо.
Problem Constraints:
1 <= A.size() <= 103
1 <= A[i].size() <= 103
0 <= Aj] <= 103
Input:
[1,2,3,4]
[5,6,7,0]
[9,2,0,4]
Output 1:
[1,2,0,0]
[0,0,0,0]
10.0,0,0]
Explanation:
A[2][4] = A[3][3] = 0, so make 2nd row, 3rd row, 3rd column and 4th column zero.*/

#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 0},
        {9, 2, 0, 4}
    };

    int rows = 3;
    int cols = 4;
    int row[3] = {0};
    int col[4] = {0};

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (row[i] == 1 || col[j] == 1) {
                arr[i][j] = 0;
            }
        }
    }

    printf("Output:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

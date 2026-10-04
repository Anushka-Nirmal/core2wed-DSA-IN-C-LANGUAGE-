/*Q7. Column Sum
Problem Descriptlon:
- You are given a 2D Integer matrix A, and return a 1D Integer array contalning
column-wise sums of the original matrix.
- Return an array contalning column-wise sums of the original matrix.
Input:
[1,2,3,4]
[5,6,7,8)
(9.2,3,4]
Output:
(15,10,13,16}*/

#include <stdio.h>

int main() {
    int A[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 2, 3, 4}
    };

    int rows = 3;
    int cols = 4;
    int sum;

    printf("Output: ");

    for (int j = 0; j < cols; j++) {
        sum = 0;

        for (int i = 0; i < rows; i++) {
            sum = sum + A[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}
/*Q1. Column Sum
Problem Description:
-You are given a 2D integer matrix A and return a 1D Integer array containing column-wise sums of the original matrix.
- Return an array containing column-wise sums of the original matrix.
Problem Constraints
1 <= A.size() <= 103
1 <= A[i].size() <= 103
1 <= Aji] <= 103
Input:
[1,2,3,4]
[5,6,7,8]
[9,2,3,4]
Output:
(15,10,13,16}
Example Explanation
Column 1= 1+5+9 =15
Column 2= 2+6+2 = 10
Column 3 =3+7+3 = 13
Column 4=4+8+4 = 16
*/

#include <stdio.h>

int main() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 2, 3, 4}
    };

    int rows = 3;
    int cols = 4;
    int sum;

    printf("Column Sums: ");

    for (int j = 0; j < cols; j++) {
        sum = 0;

        for (int i = 0; i < rows; i++) {
            sum = sum + arr[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}
/*Q2: Row sum
Problem Description:
- You are given a 2D integer matrix A and return a 1D integer array containing
row-wise sums of the original matrix.
- Return an array containing row-wise sums of the original matrix.
Problem Constraints:
1 < A.size()<= 103
1 <= A[i].size() <= 103
1 <= A[i]] <= 103
Input 1:
[1,2,3,4]
[5,6,7,8]
[9,2,3,4]
Output 1:
[10,26,18]
1 <= A[i][j] <= 103
Input 1:
[1,2,3,4]
[5,6,7,8]
[9,2,3,4]
Output 1:
[10,26,18]
Explanation:
Row 1 = 1+2+3+4 = 10
Row 2 = 5+6+7+8 = 26
Row 3 = 9+2+3+4 = 18*/

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

    printf("Row Sums: ");

    for (int i = 0; i < rows; i++) {
        sum = 0;

        for (int j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}
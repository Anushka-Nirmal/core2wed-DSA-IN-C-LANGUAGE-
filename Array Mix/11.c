/*Q11. Anti-Diagonal
Problem Description:
- Give an NN square matrix A, and return an array of its anti-diagonals.
- Return a 2D Integer array of size (2* N-1) * N, representing the
antl-dlagonals of input array A.
-The vacant spaces in the grid should be assigned to 0.
Example Input
Input 1:
123
456
789
Output 1:
100
240
357
680
006
Input 2:
12
34
Output 2
10
23
*/

#include <stdio.h>

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int result[5][3];

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
        }
    }

    for (int sum = 0; sum < 2 * n - 1; sum++) {
        int k = 0;

        for (int i = 0; i < n; i++) {
            int j = sum - i;

            if (j >= 0 && j < n) {
                result[sum][k] = A[i][j];
                k++;
            }
        }
    }

    printf("Output:\n");

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
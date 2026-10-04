/*Q5. Anti Dlagonal
Problem Description :
- Give an NN square matrix A, and return an array of its anti-diagonals.
- Return a 2D Integer array of size (2* N-1) N, representing the anti-diagonals of input array A.
-The vacant spaces in the grid should be assigned to 9.
Problem Constraints:
1<= N < 1000
1<= Al <= 1e9
Problem Constraints:
1<= N<= 1000
1<= A[i][j] <= 1e9
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
900
Input 2:
12
23
G Add Link
34
Output 2:
5
10
23
40*/

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = 3;
    int result[5][3];

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 9;
        }
    }

    for (int sum = 0; sum < 2 * n - 1; sum++) {
        int k = 0;

        for (int i = 0; i < n; i++) {
            int j = sum - i;

            if (j >= 0 && j < n) {
                result[sum][k] = arr[i][j];
                k++;
            }
        }
    }

    printf("Anti-Diagonals:\n");

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

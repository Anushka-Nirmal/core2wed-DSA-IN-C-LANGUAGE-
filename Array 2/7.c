/*Q7. Rotate matrix
Problem Description:
- You are given a n x n 2D matrix A representing an image.
- Rotate the image by 90 degrees (clockwise).
- You need to do this in place.
Note: If you ond up using an additional array, you will only receive a partial score.
Problem Constraints:
1 <= n <= 1000
Example Input:
Input 1:
[[1. 2].[3, 4]]
Output 1:
[[3, 1].[4, 2]]
Input 2:*/

#include <stdio.h>

int main() {
    int arr[2][2] = {
        {1, 2},
        {3, 4}
    };

    int n = 2;
    int temp;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            temp = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = temp;
        }
    }

    printf("Rotated Matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
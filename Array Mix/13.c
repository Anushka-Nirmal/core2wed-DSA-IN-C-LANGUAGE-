/*Q13. Rotate matrix
Problem Descriptlon:
-You are glven a n xn 20 matrix A representing an Image.
- Rotate the Image by 90 degrees (clockwise).
-You need to do this in place.
Note: If you end up using an additional array, you will only recelve
a partial score.
Example Input:
Input 1:
[[1, 2].[3, 4]]
Output 1:
[[3, 1],[4, 2]]
Input 2:
[1]]
Output 2:
1
Example Explanation:
Explanation 1:
- After rotating the matrix by 90 degrees:
1 goes to 2, 2 goes to 4
- 4 goes to 3, 3 goes to 1
Explanation 2:
- 2D array remains the same as there is the only one element.*/

#include <stdio.h>

int main() {
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int n = 2;
    int temp;

    /* Transpose the matrix */
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

    /* Reverse each row */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            temp = A[i][j];
            A[i][j] = A[i][n - 1 - j];
            A[i][n - 1 - j] = temp;
        }
    }

    printf("Rotated Matrix:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
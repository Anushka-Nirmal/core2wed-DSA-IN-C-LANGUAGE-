/*Q19. Product Array puzzie
. Given an array of integers A, find and returm the product array of the
same size where the Ith element of the product array will be equal to the product
of all the elements divided by the Ith element of the array.
Note: It is alway's possible to form the product array with integer (32-bit) values.
Solve it without using the division operator.
- Retum the product array.
Input 1:
A= [1,2, 3,4,5]
Output 1:
[120,60, 40, 30, 24]
Input 2:
A= [5. 1, 10, 1]
Output 2:
(10, 50, 5, 50)*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    int product[5];

    int left = 1;
    int right = 1;

    /* Store product of all elements to the left */
    for (int i = 0; i < n; i++) {
        product[i] = left;
        left = left * A[i];
    }

    /* Multiply by product of all elements to the right */
    for (int i = n - 1; i >= 0; i--) {
        product[i] = product[i] * right;
        right = right * A[i];
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", product[i]);
    }

    return 0;
}
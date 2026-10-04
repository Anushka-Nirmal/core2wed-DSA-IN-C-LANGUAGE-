/*Q5. Array Rotation
Problem Description:
- Given an Integer array A of size N and an Integer B, you have to return
the same array after rotating It B times towards the right.
- Return the array A after rotating it B times to the right
Problem Constraints:
1 <= N <= 105
1 <= Ali] <=109
1 <= B <= 109
Example Input:
Input 1:
A [1.2,3, 4]
B-2
Oulput 1
[3.4.1,2]*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4};
    int n = 4;
    int B = 2;
    int temp;

    B = B % n;

    for (int i = 0; i < B; i++) {
        temp = A[n - 1];

        for (int j = n - 1; j > 0; j--) {
            A[j] = A[j - 1];
        }

        A[0] = temp;
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
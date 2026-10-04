/*Q1. Kth smallest Element
Problem Description :
-Find the Bth smallest element in given array A.
NOTE: Users should try to solve it in less than equal to B
swaps.
Problem Constraints:
1 <= |A| <= 100000
1 <= B <= min(A|, 500)
1 <= A[i] <= 109
Input Format:
The first argument is an integer array A.
- The second argument is integer B.
Output Format:
- Return the Bth smallest element in given array.
Example Input :
Input 1:
A= [2, 1, 4, 3, 2]
B=3
Output 1:
2*/

#include <stdio.h>

int main() {
    int A[] = {2, 1, 4, 3, 2};
    int n = 5;
    int B = 3;
    int temp;

    for (int i = 0; i < B; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }

        if (min != i) {
            temp = A[i];
            A[i] = A[min];
            A[min] = temp;
        }
    }

    printf("%d", A[B - 1]);

    return 0;
}

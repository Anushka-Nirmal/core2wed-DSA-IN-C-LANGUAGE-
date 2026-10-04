/*Q3. Reverse in a range
Problem Description:
- Given an array A of N Integers.
- Also given are two Integers B and С.
- Reverse the array A in the given range [B, С]
-Return the array A after reversing In the given range.
Problem Constraints:
1 <= N <= 105
1 <= A[i] <= 109
0 <= B <= C <= N - 1
Example Input
Input 1:
A=[1, 2, 3, 4]
B=2
C=3
Output 1:
[1, 2,4, 3]
Input 2:
A= [2, 5, 6
B=0
C=2
Output 2:
[6.5, 2]*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4};
    int n = 4;
    int B = 2;
    int C = 3;
    int temp;

    while (B < C) {
        temp = A[B];
        A[B] = A[C];
        A[C] = temp;

        B++;
        C--;
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
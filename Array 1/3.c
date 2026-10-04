/*Q3. Reverse in a range
Problem Description:
- Given an array A of N integers.
-Also given are two integers B and C.
- Reverse the array A in the given range [B, C]
- Return the array A after reversing in the given range.
Problem Constraints:
1 <= N <= 105
1 <= A[i] <= 109
0 <= B <= C <= N -1
Example Input
Input 1:
A= [1, 2, 3, 4]
B=2
C=3
Output 1:
[1, 2, 4, 3]
Input 2:
A= [2, 5, 6]
B=0
C=2
Output 2:
(6.5, 2]
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int B = 2;
    int C = 3;
    int temp;

    while (B < C) {
        temp = arr[B];
        arr[B] = arr[C];
        arr[C] = temp;

        B++;
        C--;
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
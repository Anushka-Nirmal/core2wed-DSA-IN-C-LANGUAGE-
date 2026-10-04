/*O2. Array with consecutive element
Problem Description:
Given an array of positive integers A, check and return
whether the array elements are consecutive or not.
Problem Constraints:
- 1 <= length of the arrаy <= 100000
-1 <= A[i] <= 10^9
Input Format:
-The only argument given is the integer array A.
Output Format:
- Return 1 if the array elements are consecutive else return 0.
Example Input:
Input 1:
A= [3, 2, 14.5]
Output 1:
1
Input 2:
A=[1, 3.2, 5)
Oulput 2:
0
*/

#include <stdio.h>

int main() {
    int A[] = {3, 2, 4, 5};
    int n = 4;
    int min, max;
    int consecutive = 1;

    min = A[0];
    max = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] < min)
            min = A[i];

        if (A[i] > max)
            max = A[i];
    }

    if (max - min + 1 != n) {
        consecutive = 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (A[i] == A[j]) {
                    consecutive = 0;
                    break;
                }
            }

            if (consecutive == 0)
                break;
        }
    }

    printf("%d", consecutive);

    return 0;
}

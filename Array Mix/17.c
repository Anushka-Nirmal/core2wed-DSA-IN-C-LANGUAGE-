/*Q17. In place prefix sum
Probiem Description
- Given an array A of N Integers.
- Construct the prefix sum of the array In the given array Itself.
- Return an array of integers denoting the prefix sum of the given array.
Example Input
Input 1:
A= [1, 2, 3, 4, 5]
Input 2:
A= [4, 3, 2]
Example Output
Output 1:
[1, 3, 6, 10.15]
Output 2:
[4, 7,9]
Example Explanation
Explanation 1:
The prefix sum array of [1, 2,3, 4, 5) is [1. 3, 6, 10, 15].
Explanation 2:
The prefix sum array of [4, 3, 2] is [4, 7, 9]*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    for (int i = 1; i < n; i++) {
        A[i] = A[i] + A[i - 1];
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
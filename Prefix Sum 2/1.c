/*Q. Even numbers in a range
Problem Description
- You are gliven an array A of length N and Q queries given by the 2D array B
of size Qx2
- Each query consists of two integers BTU] and B[1]-
- For every query, your task is to find the count of even numbers in the
range fromA[B[][0]] toA[B[1].
Problem Constraints
1 <= N<= 105
10 < 105
1 < All = 109
0< B[i][0] <= B[|1] <K
Inpul Format
-First argument A is an artay of irhegers
Second argument B is a 2D array of integers
Output Format
- Retum an array of integens
Input 1:
A= [1, 2, 3, 4, 5]
B= [0,21
[2,4]
[1,4]]
Output 1:
[1.1,2]
Example Explanation
The subarray for the first query is [1, 2, 3] (index 0 to 2) which contains
1 even number.
-The subarray for the second query is [3, 4, 5] (index 2 to 4) which
contains 1 even number.
The subarray for the third query is [2, 3, 4, 5] (index 1 to 4) which
contains 2 even numbers.
*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;

    int B[3][2] = {
        {0, 2},
        {2, 4},
        {1, 4}
    };

    int q = 3;
    int prefix[5];

    prefix[0] = (A[0] % 2 == 0) ? 1 : 0;

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1];

        if (A[i] % 2 == 0)
            prefix[i]++;
    }

    printf("Output: ");

    for (int i = 0; i < q; i++) {
        int left = B[i][0];
        int right = B[i][1];
        int count;

        if (left == 0)
            count = prefix[right];
        else
            count = prefix[right] - prefix[left - 1];

        printf("%d ", count);
    }

    return 0;
}

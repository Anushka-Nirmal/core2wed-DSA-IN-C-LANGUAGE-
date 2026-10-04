/*Q2. Counting Subarrays
Problem Description
- Given an array A of N non-negative numbers and a non-negative number B,
you need to find the number of subarrays in A with a sum less than В.
- Retum an integer denoting the number of subarrays in A having sum less
than B.
Problem Constraints
1 <=N <= 103
1 <= A <= 1000
1 <= B <= 107
Example Input
Input 1:
A= [2, 5, 61
B=10
Output 1:
4
Input 2:
A= [1, 11, 2, 3, 15]
B=10
Output 2:
4
Example Explanation
Explanation 1:
- The subarrays with sum less than B are (2), (5), (6) and {2, 5).
Explanation 2:
- The subarrays with sum less than B are (1), (2), (3) and (2, 3}*/

#include <stdio.h>

int main() {
    int A[] = {2, 5, 6};
    int n = 3;
    int B = 10;

    int count = 0;
    int sum;

    for (int i = 0; i < n; i++) {
        sum = 0;

        for (int j = i; j < n; j++) {
            sum = sum + A[j];

            if (sum < B)
                count++;
            else
                break;
        }
    }

    printf("%d", count);

    return 0;
}
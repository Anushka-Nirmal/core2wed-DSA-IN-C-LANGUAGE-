/*Q1. Count of elements
Problem Description:
-Given an array A of N Integers.
- Count the number of elements that have at least 1 element greater than
Itself.
Example Input
Input 1:
A= [3, 1, 2]
Output:
2
Explanation:
- The elements that have at least 1 element greater than itself are 1 and 2
Input 2:
A= [5, 5, 3]
Output:
Explanation:
- The element that has at least 1 element greater than itself is 3.*/

#include <stdio.h>

int main() {
    int A[] = {3, 1, 2};
    int n = 3;
    int max;
    int count = 0;

    max = A[0];

    for (int i = 1; i < n; i++) {
        if (A[i] > max)
            max = A[i];
    }

    for (int i = 0; i < n; i++) {
        if (A[i] < max)
            count++;
    }

    printf("%d", count);

    return 0;
}
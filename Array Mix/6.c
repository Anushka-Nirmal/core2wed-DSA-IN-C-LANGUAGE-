/*Q6.
Given an Integer array of size of N.
Count the number of elements having at least 1 element greater than Itself.
Input:
int am[] = (2,5,1,4,8,0,8,1,3,8).
Output:
7*/

#include <stdio.h>

int main() {
    int A[] = {2, 5, 1, 4, 8, 0, 8, 1, 3, 8};
    int n = 10;
    int max = A[0];
    int count = 0;

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
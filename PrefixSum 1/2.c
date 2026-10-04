/*Q2 Equilibrium index of the arraу
Note:
-Your
- You are
 task
 given an array A of Integers of size N.
 is to find the equllibrium
- The equilibrium Index of the given array index of an array is an index such that the sum of
-
elements
If there are
 at
 no
 lower
 elements
 indexes are equal to the sum of elements at higher indexes.
 that are at lower Indexes or at higher indexes, then the corresponding sum of elements is considered as 0.
Array indexing starts from 0.
If there is no equilibrium index then return -1. If there is more than one equilibrium index then return the minimum index.
Problem Constraints
1 <= N<= 105
-105 <= A[] <= 105
Input 1:
A= [-7, 1, 5, 2, -4, 3, 0] 
Output 1:
3
*/

#include <stdio.h>

int main() {
    int A[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = 7;

    int totalSum = 0;
    int leftSum = 0;
    int index = -1;

    for (int i = 0; i < n; i++) {
        totalSum = totalSum + A[i];
    }

    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - A[i];

        if (leftSum == rightSum) {
            index = i;
            break;
        }

        leftSum = leftSum + A[i];
    }

    printf("%d", index);

    return 0;
}
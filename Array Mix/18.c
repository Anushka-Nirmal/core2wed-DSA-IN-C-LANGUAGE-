/*Q18 Equllibrlum index of the array
Note:
Problem Description
- You are given an array A of Integers of size N.
- Your task is to find the equilibrium index of the given arrау
- The equilibrium index of an array is an index such that the sum of
elements at lower indexes is equal to the sum of elements at higher indexes.
- If there are no elements that are at lower indexes or at higher indexes,
then the corresponding sum of elements is considered as 0.
Array Indexing starts from 0.
If there is no equilibrium index then return -1
If there is more than one equilibrium Index then return the minimum Index.
Example Input
Input 1:
A=[-7, 1,5,2.4.3.01
Input 2
A [1.2,3]
Example Output
Output 1:
3
Output 2:*/

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
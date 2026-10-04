/*Q20. Even numbers in a range
Problem Description
-You are glven an array A of length N and Q queries given by the 2D array B
of size Q-2
-Each query consists of two integers B(1[0] and B[][1].
-For every query, your task is to find the count of even numbers in the
range from A[B[[U]] to AB
Input Fomat
-First argument A Is an array of integers.
-Second argument B is a 2D array of Integers.
Output Format
Retum an array of integers.
Example Input
Input 1:
A=[1, 2, 3, 4, 5]
B=[ [0, 21
[2,4]
[1.4]
Input 2:
A= [2, 1, 8, 3, 9, 6]
B=[ [0,3]
[3,5)
[1, 3]
[2,4]]
Example Output
Output 1:
[1,1,2]
Output 2:
[2, 1, 1, 1]*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    int product[5];

    int left = 1;
    int right = 1;

    /* Store product of all elements to the left */
    for (int i = 0; i < n; i++) {
        product[i] = left;
        left = left * A[i];
    }

    /* Multiply by product of all elements to the right */
    for (int i = n - 1; i >= 0; i--) {
        product[i] = product[i] * right;
        right = right * A[i];
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", product[i]);
    }

    return 0;
}
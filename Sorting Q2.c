/* Sort by color
Problem Description:
-Glven an array with N objects colored red, white, or blue, sort them so
that objects of the same color are adjacent, with the colors In the order
red, white, and blue.
- We will use the Integers 0, 1, and 2 to represent red, white, and blue,
respectively.
-Note: Using the Ilbrary sort function is not allowed.
Problem Constraints
1 <= N <= 1000000
0<= A[] <= 2
Example Input
Input 1:
A=[012012]
Input 2:
A= [0]
Example Output
Output 1:
[00112 2]
Output 2:
[0]*/

#include <stdio.h>

int main() {
    int A[] = {0, 1, 2, 0, 1, 2};
    int n = 6;
    int low = 0;
    int mid = 0;
    int high = n - 1;
    int temp;

    while (mid <= high) {
        if (A[mid] == 0) {
            temp = A[low];
            A[low] = A[mid];
            A[mid] = temp;

            low++;
            mid++;
        }
        else if (A[mid] == 1) {
            mid++;
        }
        else {
            temp = A[mid];
            A[mid] = A[high];
            A[high] = temp;

            high--;
        }
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
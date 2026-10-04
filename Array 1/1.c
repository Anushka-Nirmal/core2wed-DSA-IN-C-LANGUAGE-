/*Q1. Count of elements
Array Assignment1(1-D Array)
.ו 23
G Add Link
Problem Description:
- Given an array A of N integers.
-Count the number of elements that have at least 1 element greater than
itself.
Problem Constraints
1 <= N <=105
1 <= A[i] <= 109
Example Input
Input 1:
A = [3, 1,2]
Output:
2
Explanation:
- The elements that have at least 1 element greater than itself are 1 and 2
Input 2:
A= [5, 5, 31
Output:
1
Explanation:
- The element that has at least 1 element greater than itself is 3.*/

#include <stdio.h>

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    int max, count;

    max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < max)
            count++;
    }

    printf("Count = %d", count);

    return 0;
}

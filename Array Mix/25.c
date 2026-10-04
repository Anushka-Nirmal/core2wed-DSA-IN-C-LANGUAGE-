/*Q25. Good Subarray
Problem Description
- Glven an array of Integers A, a subarray of an array is sald to be good i
it fulfills any one of the criteria:
1. Length of the subarray is be even, and the sum of all the elements of the
subarray must be less than B.
2. Length of the subarray is be odd, and the sum of all the elements of the
subarray must be greater than B.
- Your task Is to find the count of good subarrays In A.
-Return the count of good subarrays in A.
Example Input
Input 1:
A= [1, 2, 3, 4, 5]
B=4
Output 1:
6
*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int n = 5;
    int B = 4;

    int count = 0;
    int sum;

    for (int i = 0; i < n; i++) {
        sum = 0;

        for (int j = i; j < n; j++) {
            sum = sum + A[j];

            int length = j - i + 1;

            if (length % 2 == 0 && sum < B) {
                count++;
            }
            else if (length % 2 != 0 && sum > B) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}

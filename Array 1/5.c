/*Q5. Array Rotation
Problem Description:
- Given an integer array A of size N and an integer B, you have to return the same array after rotating it B times towards the right.
- Retum the array A after rotating it B times to the right
Problem Constraints :
1 <= N <= 105
1 <= A[i] <=109
1 <= B <= 109
Example Input :
Input 1:
A= [1, 2, 3, 4]
B=2
Output 1:
[3, 4, 1, 2]
Input 2:
A= [2, 5,6]
B=1
Output 2:
[6, 2, 5]
Example Explanation:
Explanation 1:
Rotate towards the right 2 times
[1, 2, 3, 4] => [4, 1, 2, 3] => [3, 4, 1, 2]*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int B = 2;
    int temp;

    B = B % n;

    for (int i = 0; i < B; i++) {
        temp = arr[n - 1];

        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }

        arr[0] = temp;
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
/*Q2. Good Pair
Problem Description:
Given an array A and an integer B.
-A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == В).
- Check if any good pair exist or not.
- Return 1 if good pair exist otherwise return 0.
Problem Constraints:
1 <= A.size() <= 104
1 <= A[i] <= 109
1 <= B <= 109
Example Input
Input 1:
A = [1,2,3,4]
B=7
Output 1:
Input 2:
A= [1,2,4]
B=4
Output 2:
0
Input 3:
A= [1,2,2]
B=4
Qutput 3:
1
Example Explanation:
Explanation 1:
()= (3.4)
*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;
    int B = 7;
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == B) {
                found = 1;
                break;
            }
        }

        if (found == 1)
            break;
    }

    printf("%d", found);

    return 0;
}
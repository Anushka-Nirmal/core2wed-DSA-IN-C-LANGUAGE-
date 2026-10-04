/*Q2. Good Pair
Problem Description:
- Given an array A and an Integer B.
-A pair(l, J) In the array Is a good palr if I I= J and (A[] + A[]] == B).
-Check If any good palr exist or not.
-Return 1 if good palr exist otherwise return 0.
Example Input
Input 1:
A= (1,2,3,4)
B=7
Qutput 1:
Input 2:
A= [1,2,4]
B4
Output 2:
0
Input 3
A (1,2.2]
84
Output 3
1
*/

#include <stdio.h>

int main() {
    int A[] = {1, 2, 3, 4};
    int n = 4;
    int B = 7;
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (A[i] + A[j] == B) {
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
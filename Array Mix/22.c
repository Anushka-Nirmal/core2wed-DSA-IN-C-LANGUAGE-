/*Q22. Special Subsequences "AG"
Problem Description:
- You have given a string A having Uppercase English letters. - You
string.
 have to find how many times the subsequence "AG" is there in the given
- Returm the count of(iJ) such that, a)l<j
b) s[] = 'A' and s]= 'G
Example Input
Input 1:
A= "ABCGAG"
Input 2:
A= "GAB
Example Output
Output 1:
3
Output 2:
0
*/

#include <stdio.h>

int main() {
    char A[] = "ABCGAG";
    int n = 6;

    int countA = 0;
    int countAG = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] == 'A') {
            countA++;
        }
        else if (A[i] == 'G') {
            countAG = countAG + countA;
        }
    }

    printf("%d", countAG);

    return 0;
}
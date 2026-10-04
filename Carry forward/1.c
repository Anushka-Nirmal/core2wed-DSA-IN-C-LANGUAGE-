/*Q1. Special Subsequences "AG"
Problem Description:
- You have given a string A having Uppercase English letters. You have to find how many times the subsequence "AG" is there in the given string.
- Return the count of(1j) such that,
a)i<j
b) s[i] = 'A' and s[[] ='G'
Problem Constraints
1 <= length(A) <= 105
Input 1:
A = "ABCGAG"
Output 1:
3
Explanation 1:
- Subsequence "AG" is 3 times in a given string
Input 2:
A= "GAB"
Output 2
0
Explanation 2:
-There is no subsequence "AG" in the given string.*/

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

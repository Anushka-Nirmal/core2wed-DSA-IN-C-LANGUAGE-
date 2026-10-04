/*You are given an array A of N elements. Sort the given array in increasing order of the number of distinct factors of each element, i.e., an element having at least number of factors should be first to be displayed and the number of having the highest number of factors should be last one. If two numbers have same number of factors, then the number with less value should come first. Return an array of integer. Note: You cannot use the extra spaces. Problem constraints:

1<=N<=104

1<=A[i]<=104

Example input:

input:

A = [6, 8, 9]

OUTPUT:

[9, 6, 8]*/

#include <stdio.h>

int countFactors(int n) {
    int count = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == n / i)
                count++;
            else
                count += 2;
        }
    }

    return count;
}

int main() {
    int A[] = {6, 8, 9};
    int n = 3;
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            int f1 = countFactors(A[j]);
            int f2 = countFactors(A[j + 1]);

            if (f1 > f2 || (f1 == f2 && A[j] > A[j + 1])) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("Output: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
/*Q2. Subarray with given sum
- Glven an array arr[] of non-negative Integers and an Integer sum,
find a subarray that adds to a glven sum.
Note: There may be more than one subarray with sum as the given sum, print
first such subarray.
Examples:
Input1:
am[] = {1,4, 20, 3, 10, 5), sum = 33
Output:
-Sum found between indexes 2 and 4
Explanation:
-Sum of elements between indices 2 and 4 is 20 +3 + 10=33
Input2:
am[] = (1, 4, 0, 0, 3, 10, 5}, sum = 7
Output:
- Sum found between indexes 1 and 4*/

#include <stdio.h>

int main() {
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = 6;
    int sum = 33;

    int currentSum = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        currentSum = currentSum + arr[i];

        while (currentSum > sum && start <= i) {
            currentSum = currentSum - arr[start];
            start++;
        }

        if (currentSum == sum) {
            printf("Sum found between indexes %d and %d", start, i);
            return 0;
        }
    }

    printf("No subarray found");

    return 0;
}

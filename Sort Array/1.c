/*Q1. Given an array arr[] consisting of N positive integers, the task is to sort the array such that-
- All even numbers must come before all odd numbers.
-All even numbers divisible by 5 must come first then even numbers not divisible by 5.
- If two even numbers are divisible by 5 then the number havinga greater value will come first
- If two even numbers were not divisible by 5 then the number having a
greater index in the array will come first.
-All odd numbers must come in relative order as they are present in the array.
Examples:
Input:
arr[] = {5, 10, 30, 7}
Output:
30 10 57
*/

#include <stdio.h>

int main() {
    int arr[] = {5, 10, 30, 7};
    int n = 4;
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            int swap = 0;

            if (arr[i] % 2 != 0 && arr[j] % 2 == 0) {
                swap = 1;
            }
            else if (arr[i] % 2 == 0 && arr[j] % 2 == 0) {

                if (arr[i] % 5 != 0 && arr[j] % 5 == 0) {
                    swap = 1;
                }
                else if (arr[i] % 5 == 0 && arr[j] % 5 == 0) {
                    if (arr[i] < arr[j])
                        swap = 1;
                }
                else if (arr[i] % 5 != 0 && arr[j] % 5 != 0) {
                    /* Keep later even element before earlier one */
                    swap = 1;
                }
            }

            if (swap == 1) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

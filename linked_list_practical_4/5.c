/*Program 5.
Write a program that searches all the Palindrome data elements from a
doubly linked list. And Print the position of pallndrome data Submit with a proper dlagram.
Input: linked list: |12|->|121|->|30|->|252|->35|->|151|->70|
Output:
Palindrome found at 2
Palindrome found at 4
Palindrome found at 6*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int data) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void addNode(int data) {
    struct node *newNode;
    struct node *temp;

    newNode = createNode(data);

    if (head == NULL) {
        head = newNode;
    }
    else {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}

int isPalindrome(int num) {
    int original;
    int reverse = 0;
    int remainder;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

void searchPalindrome() {
    struct node *temp;
    int position = 1;

    temp = head;

    while (temp != NULL) {
        if (isPalindrome(temp->data)) {
            printf("Palindrome found at %d\n", position);
        }

        position++;
        temp = temp->next;
    }
}

int main() {
    int n, i, data;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &data);
        addNode(data);
    }

    searchPalindrome();

    return 0;
}
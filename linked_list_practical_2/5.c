/*Write a program that searches all the Palindrome data elements from a
singly linear linked list. And Print the position of palindrome data
Input: linked list: |12|->|121|->|30|->|252|->|35|->|151|->|70|
Output:
Palindrome found at 2
Palindrome found at 4
Palindrome found at 6*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int data) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
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
    }
}

int isPalindrome(int num) {
    int original, reverse = 0, remainder;

    original = num;

    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse) {
        return 1;
    }

    return 0;
}

void findPalindrome() {
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
    addNode(12);
    addNode(121);
    addNode(30);
    addNode(252);
    addNode(35);
    addNode(151);
    addNode(70);

    findPalindrome();

    return 0;
}

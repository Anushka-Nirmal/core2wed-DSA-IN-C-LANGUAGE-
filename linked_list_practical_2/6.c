/*Linked list structure :
struct node {
char str[20]; // Data element
struct node *next, // Address of next node
};
========================================================
Program 6.
Write a program that accepts a singly linear linked list from the user.
Take a number from the user and print the data of the length of that
number. Length of kanha=5
Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
Input: Enter number 5
Output:
Kanha
Rahul
Badhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char str[20];
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(char str[]) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    strcpy(newNode->str, str);
    newNode->next = NULL;

    return newNode;
}

void addNode(char str[]) {
    struct node *newNode;
    struct node *temp;

    newNode = createNode(str);

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

void printLength(int length) {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        if (strlen(temp->str) == length) {
            printf("%s\n", temp->str);
        }

        temp = temp->next;
    }
}

int main() {
    int n, i, length;
    char str[20];

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter string: ");
        scanf("%s", str);
        addNode(str);
    }

    printf("Enter length: ");
    scanf("%d", &length);

    printLength(length);

    return 0;
}

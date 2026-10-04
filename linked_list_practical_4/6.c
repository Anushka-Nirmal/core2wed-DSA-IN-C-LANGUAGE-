/*Program 6.
Write a program that accepts a doubly linked list from the user.
Take a number from the user and print the data of the length of that
number. Length of kanha=5
Submit with a proper diagram.
Input: linked list: Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
Input: Enter Length 5
Output:
Kanha
Rahul
Badhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char str[20];
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(char str[]) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    strcpy(newNode->str, str);
    newNode->prev = NULL;
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
        newNode->prev = temp;
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

    printf("Enter Length: ");
    scanf("%d", &length);

    printf("Output:\n");
    printLength(length);

    return 0;
}
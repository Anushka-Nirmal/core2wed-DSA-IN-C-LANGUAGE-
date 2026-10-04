/*Write a program that accepts a doubly linked list from the user.
Reverse the data elements from the linked list
Submit with a proper dlagram.
Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
Output: linked list ihsahS|-> hsihsA|->|ahnaK|->|luhaR|->|ehdaB|
*/

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

void reverseData() {
    struct node *left;
    struct node *right;
    char temp[20];

    left = head;
    right = head;

    while (right->next != NULL) {
        right = right->next;
    }

    while (left != right && left->prev != right) {
        strcpy(temp, left->str);
        strcpy(left->str, right->str);
        strcpy(right->str, temp);

        left = left->next;
        right = right->prev;
    }
}

void printList() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        printf("|%s|", temp->str);

        if (temp->next != NULL)
            printf("->");

        temp = temp->next;
    }
}

int main() {
    int n, i;
    char str[20];

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter string: ");
        scanf("%s", str);
        addNode(str);
    }

    printf("Input Linked List: ");
    printList();

    reverseData();

    printf("\nOutput Linked List: ");
    printList();

    return 0;
}
/*Program 4.
Write a program that adds the digits of a datá element from a doubly linked
Ilst and changes the data. (sum of data element digits)
Submit with a proper dlagram.
Input linked list: |11]->|12->|13->|141->2]->158|
Output linked list : |2|->|3->|4|->6]->2|->|14|*/

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

int sumDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

void changeData() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        temp->data = sumDigits(temp->data);
        temp = temp->next;
    }
}

void printList() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        printf("|%d|", temp->data);

        if (temp->next != NULL)
            printf("->");

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

    printf("Input Linked List: ");
    printList();

    changeData();

    printf("\nOutput Linked List: ");
    printList();

    return 0;
}
/*Program 3.
Write a program that searches the occurrence of a particular element from
a doubly linked list. Submit with a proper diagram.
Input linked list: |10|->|20|->|30|->|40|>]50]>|30|->|70l
Input Enter element: 30
Output: 2 times*/

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

int searchOccurrence(int element) {
    struct node *temp;
    int count = 0;

    temp = head;

    while (temp != NULL) {
        if (temp->data == element) {
            count++;
        }

        temp = temp->next;
    }

    return count;
}

int main() {
    int n, i, data, element, count;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &data);
        addNode(data);
    }

    printf("Enter element: ");
    scanf("%d", &element);

    count = searchOccurrence(element);

    printf("Output: %d times", count);

    return 0;
}
/*Write a program that searches for the second last occurrence of a
particular element from a singly linear linked list.
Input linked list: |10|->|20|->|30|->|40|->|30|->|30|->|70|
Input Enter element: 30
Output: 5*/

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

int secondLastOccurrence(int element) {
    struct node *temp;
    int position = 1;
    int last = -1;
    int secondLast = -1;

    temp = head;

    while (temp != NULL) {
        if (temp->data == element) {
            secondLast = last;
            last = position;
        }

        position++;
        temp = temp->next;
    }

    return secondLast;
}

int main() {
    int element;
    int position;

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(30);
    addNode(30);
    addNode(70);

    printf("Enter element: ");
    scanf("%d", &element);

    position = secondLastOccurrence(element);

    if (position != -1) {
        printf("Output: %d\n", position);
    }
    else {
        printf("Second last occurrence not found\n");
    }

    return 0;
}

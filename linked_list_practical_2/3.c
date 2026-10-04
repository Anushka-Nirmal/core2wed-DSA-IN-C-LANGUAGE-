/*Write a program that searches the occurrence of a particular element from
a singly linear linked list.
Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input Enter element: 30
Output: 2 times*/

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

int countOccurrence(int element) {
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
    int element;
    int count;

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    addNode(30);
    addNode(70);

    printf("Enter element: ");
    scanf("%d", &element);

    count = countOccurrence(element);

    printf("Output: %d times\n", count);

    return 0;
}

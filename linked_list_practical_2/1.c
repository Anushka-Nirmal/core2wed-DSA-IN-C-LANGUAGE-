/*Write a program that searches for the first occurrence of a particular
element from a singly linear linked list.
Input linked list: |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input: Enter element: 30
Output : 3*/

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

int searchFirst(int element) {
    struct node *temp;
    int position = 1;

    temp = head;

    while (temp != NULL) {
        if (temp->data == element) {
            return position;
        }

        position++;
        temp = temp->next;
    }

    return -1;
}

int main() {
    int data, element, position;
    int i;

    addNode(10);
    addNode(20);
    addNode(30);
    addNode(40);
    addNode(50);
    addNode(30);
    addNode(70);

    printf("Enter element: ");
    scanf("%d", &element);

    position = searchFirst(element);

    if (position != -1) {
        printf("Output: %d\n", position);
    }
    else {
        printf("Element not found\n");
    }

    return 0;
}

/*Program 2.
Write a program that searches for the second last occurrence of a
particular element from a doubly linked list.
Submit with aproper diagram.
Input linked list: |10|->|20|->|30|->|40|->|30|->|30|->|701
Input Enter element: 30
Output: 5
*/

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
    int n, i, data, element, position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &data);
        addNode(data);
    }

    printf("Enter element: ");
    scanf("%d", &element);

    position = secondLastOccurrence(element);

    if (position != -1)
        printf("Output: %d", position);
    else
        printf("Second last occurrence not found");

    return 0;
}
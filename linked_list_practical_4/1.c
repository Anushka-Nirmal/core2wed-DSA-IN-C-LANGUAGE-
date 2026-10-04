/*Write a program that searches for the first occurrence of a particular
element from a doubly linked list.
Submit with a proper diagram.
Input linked list: |10|->|20|->]30|->|40|->|50|->|30|->|70
Input: Enter element: 30
Output: 3*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int no;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int no) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->no = no;
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void addNode(int no) {
    struct node *newNode;
    struct node *temp;

    newNode = createNode(no);

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

void searchFirst(int element) {
    struct node *temp;
    int position = 1;

    temp = head;

    while (temp != NULL) {
        if (temp->no == element) {
            printf("%d", position);
            return;
        }

        position++;
        temp = temp->next;
    }

    printf("Element not found");
}

int main() {
    int n, i, no, element;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &no);

        addNode(no);
    }

    printf("Enter element: ");
    scanf("%d", &element);

    printf("Output: ");
    searchFirst(element);

    return 0;
}

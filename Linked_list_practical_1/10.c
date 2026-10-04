/*Write a real time example for a linked list and print its data take 5 nodes from the user*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int rollNo;
    char name[30];
    struct node *next;
};

struct node *head = NULL;

struct node* createNode() {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter Roll Number: ");
    scanf("%d", &newNode->rollNo);

    printf("Enter Student Name: ");
    scanf("%s", newNode->name);

    newNode->next = NULL;

    return newNode;
}

void addNode() {
    struct node *newNode;
    struct node *temp;

    newNode = createNode();

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

void printLL() {
    struct node *temp;

    temp = head;

    printf("\n===== STUDENT DETAILS =====\n");

    while (temp != NULL) {
        printf("\nRoll Number: %d", temp->rollNo);
        printf("\nStudent Name: %s\n", temp->name);

        temp = temp->next;
    }
}

int main() {
    int i;

    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d:\n", i + 1);
        addNode();
    }

    printLL();

    return 0;
}

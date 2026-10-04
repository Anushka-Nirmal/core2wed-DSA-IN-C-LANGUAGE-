/*Write a demo structure consisting of integer data take the number of nodes from the user and print the addition of the integer data*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode() {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter integer data: ");
    scanf("%d", &newNode->data);

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

void sumNodes() {
    struct node *temp;
    int sum = 0;

    temp = head;

    while (temp != NULL) {
        sum = sum + temp->data;
        temp = temp->next;
    }

    printf("\nAddition of integer data = %d\n", sum);
}

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter data for node %d:\n", i + 1);
        addNode();
    }

    sumNodes();

    return 0;
}

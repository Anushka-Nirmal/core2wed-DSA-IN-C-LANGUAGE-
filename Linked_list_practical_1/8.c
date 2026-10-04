/*Print the minimum integer data from the above nodes*/

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

void findMinimum() {
    struct node *temp;
    int min;

    if (head == NULL) {
        printf("\nLinked list is empty.\n");
        return;
    }

    min = head->data;
    temp = head->next;

    while (temp != NULL) {
        if (temp->data < min) {
            min = temp->data;
        }

        temp = temp->next;
    }

    printf("\nMinimum integer data = %d\n", min);
}

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter data for node %d:\n", i + 1);
        addNode();
    }

    findMinimum();

    return 0;
}

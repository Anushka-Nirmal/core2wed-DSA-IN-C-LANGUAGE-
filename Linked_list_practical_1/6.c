/*Print the addition of the first and last node data from the above code*/

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

void addFirstLast() {
    struct node *temp;
    int first, last, sum;

    if (head == NULL) {
        printf("\nLinked list is empty.\n");
        return;
    }

    first = head->data;

    temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    last = temp->data;

    sum = first + last;

    printf("\nFirst node data = %d", first);
    printf("\nLast node data = %d", last);
    printf("\nAddition of first and last node = %d\n", sum);
}

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter data for node %d:\n", i + 1);
        addNode();
    }

    addFirstLast();

    return 0;
}

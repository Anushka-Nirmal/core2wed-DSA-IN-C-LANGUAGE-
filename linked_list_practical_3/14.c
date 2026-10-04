/*Write a program that accepts a source singly linear linked list and a destination singly linear linked list and check whether the source list is a sublist of the destination list. The function returns the last position at which the sub-list is found.

Input:

Source: |73|->|80|->|70|

Destination:
|10|->|73|->|80|->|70|->|22|->|73|->|80|->|70|->|21|

Output:

Last Sub list found at position 6*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int no;
    struct node *next;
};

struct node* createNode(int no) {
    struct node *newNode = malloc(sizeof(struct node));

    newNode->no = no;
    newNode->next = NULL;

    return newNode;
}

void addNode(struct node **head, int no) {
    struct node *newNode = createNode(no);
    struct node *temp;

    if (*head == NULL)
        *head = newNode;
    else {
        temp = *head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

int findLast(struct node *source, struct node *destination) {
    struct node *d;
    struct node *s;
    int position = 1;
    int last = -1;

    while (destination != NULL) {
        d = destination;
        s = source;

        while (s != NULL && d != NULL && s->no == d->no) {
            s = s->next;
            d = d->next;
        }

        if (s == NULL)
            last = position;

        destination = destination->next;
        position++;
    }

    return last;
}

int main() {
    struct node *source = NULL;
    struct node *destination = NULL;

    int n, i, no, position;

    printf("Enter source nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &no);
        addNode(&source, no);
    }

    printf("Enter destination nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &no);
        addNode(&destination, no);
    }

    position = findLast(source, destination);

    if (position != -1)
        printf("Last Sub list found at position %d", position);
    else
        printf("Sub list not found");

    return 0;
}
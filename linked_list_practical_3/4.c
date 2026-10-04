/*Write a program that accepts two singly linear linked lists from the user and concat the last N elements of the source linked list after the destination linked list.

Input:

Source:      |30|->|30|->|70|
Destination: |10|->|20|->|30|->|40|
N = 2

Output:

|10|->|20|->|30|->|40|->|30|->|70|*/

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

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        temp = *head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

int countNodes(struct node *head) {
    int count = 0;

    while (head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}

void concatLastN(struct node **destination, struct node *source, int n) {
    int total, skip = 0, count = 0;
    struct node *temp;
    struct node *s;

    total = countNodes(source);
    skip = total - n;

    s = source;

    while (s != NULL && count < skip) {
        s = s->next;
        count++;
    }

    if (*destination == NULL) {
        while (s != NULL) {
            addNode(destination, s->no);
            s = s->next;
        }
        return;
    }

    temp = *destination;

    while (temp->next != NULL)
        temp = temp->next;

    while (s != NULL) {
        temp->next = createNode(s->no);
        temp = temp->next;
        s = s->next;
    }
}

void printList(struct node *head) {
    while (head != NULL) {
        printf("|%d|", head->no);

        if (head->next != NULL)
            printf("->");

        head = head->next;
    }
}

int main() {
    struct node *source = NULL;
    struct node *destination = NULL;

    int n, i, no, number;

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

    printf("Enter number of elements: ");
    scanf("%d", &number);

    concatLastN(&destination, source, number);

    printf("Output: ");
    printList(destination);

    return 0;
}
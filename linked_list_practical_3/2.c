/*Program 2. Write a program that accepts two singly linear linked lists from the user and concat source linked list after destination linked list. Input source linked list : |30|->|30|->|70| Input destination linked list : |10|->|20|->|30|->|40| Output destination linked list : |10|->|20|->|30|->|40|->|30|- >|30|>|70|*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int no;
    struct node *next;
};

struct node* createNode(int no) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->no = no;
    newNode->next = NULL;

    return newNode;
}

void addNode(struct node **head, int no) {
    struct node *newNode;
    struct node *temp;

    newNode = createNode(no);

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        temp = *head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }
}

void concat(struct node **destination, struct node *source) {
    struct node *temp;

    if (*destination == NULL) {
        *destination = source;
        return;
    }

    temp = *destination;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = source;
}

void printList(struct node *head) {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        printf("|%d|", temp->no);

        if (temp->next != NULL) {
            printf("->");
        }

        temp = temp->next;
    }
}

int main() {
    struct node *source = NULL;
    struct node *destination = NULL;

    int n, i, no;

    printf("Enter number of source nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &no);
        addNode(&source, no);
    }

    printf("Enter number of destination nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &no);
        addNode(&destination, no);
    }

    concat(&destination, source);

    printf("Output destination linked list: ");
    printList(destination);

    return 0;
}

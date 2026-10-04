/*Write a program that copies the last N contents of the source singly linear linked list to the destination singly linear linked list.

Input:

Source: |30|->|30|->|70|->|80|->|90|->|100|
N = 4

Output:

|70|->|80|->|90|->|100|*/

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

int countNodes(struct node *head) {
    int count = 0;

    while (head != NULL) {
        count++;
        head = head->next;
    }

    return count;
}

void copyLastN(struct node *source, struct node **destination, int n) {
    int total = countNodes(source);
    int skip = total - n;
    int count = 0;

    while (source != NULL) {
        if (count >= skip)
            addNode(destination, source->no);

        source = source->next;
        count++;
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

    printf("Enter number: ");
    scanf("%d", &number);

    copyLastN(source, &destination, number);

    printf("Output: ");
    printList(destination);

    return 0;
}
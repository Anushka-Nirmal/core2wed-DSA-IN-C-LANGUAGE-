/*Write a program that copies the contents of the source singly linear linked list which lies between the particular range accepted by the user.

Input:

Source: |30|->|30|->|70|->|80|->|90|->|100|
Starting range: 2
Ending range: 5

Output:

|30|->|70|->|80|->|90|*/

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

void copyRange(struct node *source, struct node **destination,
               int start, int end) {
    int position = 1;

    while (source != NULL) {
        if (position >= start && position <= end)
            addNode(destination, source->no);

        position++;
        source = source->next;
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

    int n, i, no;
    int start, end;

    printf("Enter source nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &no);
        addNode(&source, no);
    }

    printf("Enter starting range: ");
    scanf("%d", &start);

    printf("Enter ending range: ");
    scanf("%d", &end);

    copyRange(source, &destination, start, end);

    printf("Output: ");
    printList(destination);

    return 0;
}
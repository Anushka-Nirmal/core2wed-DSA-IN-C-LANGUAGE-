/*Program 1. Write a program that searches all occurrences of a particular element from a singly linear linked list. Input linked list : |10|->|20|->|30|->|40|->|30|->|30|->|70| Input element: 30 Output : 3*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int no;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int no) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->no = no;
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
    }
}

void searchAll(int element) {
    struct node *temp;
    int position = 1;

    temp = head;

    while (temp != NULL) {
        if (temp->no == element) {
            printf("%d\n", position);
        }

        position++;
        temp = temp->next;
    }
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

    printf("Enter element to search: ");
    scanf("%d", &element);

    printf("Output: ");
    searchAll(element);

    return 0;
}

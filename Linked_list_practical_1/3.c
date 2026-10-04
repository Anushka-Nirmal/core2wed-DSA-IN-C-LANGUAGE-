/*WAp for the linkedlist of festivals in india. take input form the user in the linked list and print its data*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    char festivalName[30];
    char month[20];
    char state[30];
    struct node *next;
};

struct node *head = NULL;

struct node* createNode() {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter festival name: ");
    scanf("%s", newNode->festivalName);

    printf("Enter month: ");
    scanf("%s", newNode->month);

    printf("Enter state: ");
    scanf("%s", newNode->state);

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

    printf("\n===== FESTIVAL DETAILS =====\n");

    while (temp != NULL) {
        printf("\nFestival Name: %s", temp->festivalName);
        printf("\nMonth: %s", temp->month);
        printf("\nState: %s\n", temp->state);

        temp = temp->next;
    }
}

int main() {
    int n, i;

    printf("Enter number of festivals: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Festival %d:\n", i + 1);
        addNode();
    }

    printLL();

    return 0;
}


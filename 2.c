/*wap for the linked list of states in india consisting  of its name, population, budget, and literacy connect 4 states in the linkedlist and print their data  */

#include <stdio.h>
#include <stdlib.h>

struct node {
    char stateName[30];
    long population;
    float budget;
    float literacy;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode() {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter state name: ");
    scanf("%s", newNode->stateName);

    printf("Enter population: ");
    scanf("%ld", &newNode->population);

    printf("Enter budget: ");
    scanf("%f", &newNode->budget);

    printf("Enter literacy rate: ");
    scanf("%f", &newNode->literacy);

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

    printf("\n===== STATE DETAILS =====\n");

    while (temp != NULL) {
        printf("\nState Name: %s", temp->stateName);
        printf("\nPopulation: %ld", temp->population);
        printf("\nBudget: %.2f", temp->budget);
        printf("\nLiteracy Rate: %.2f%%\n", temp->literacy);

        temp = temp->next;
    }
}

int main() {
    int i;

    printf("Enter details of 4 states:\n");

    for (i = 0; i < 4; i++) {
        printf("\nEnter details of State %d:\n", i + 1);
        addNode();
    }

    printLL();

    return 0;
}


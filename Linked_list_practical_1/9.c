//WAP to check the prime number present in the data from the above nodes

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

int isPrime(int num) {
    int i;

    if (num < 2) {
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void checkPrime() {
    struct node *temp;
    int found = 0;

    temp = head;

    printf("\nPrime numbers present in the linked list:\n");

    while (temp != NULL) {
        if (isPrime(temp->data)) {
            printf("%d ", temp->data);
            found = 1;
        }

        temp = temp->next;
    }

    if (found == 0) {
        printf("No prime numbers found.");
    }

    printf("\n");
}

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter data for node %d:\n", i + 1);
        addNode();
    }

    checkPrime();

    return 0;
}

/*Write a program that copies the contents of the source singly linear linked list whose addition of digits is the prime number to the destination singly linear linked list.

Input:

Source: |30|->|29|->|73|->|80|->|70|->|110|->|89|

Output:

|30|->|29|->|70|->|110|->|89|*/

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

int sumDigits(int no) {
    int sum = 0;

    while (no != 0) {
        sum = sum + no % 10;
        no = no / 10;
    }

    return sum;
}

int isPrime(int no) {
    int i;

    if (no < 2)
        return 0;

    for (i = 2; i <= no / 2; i++) {
        if (no % i == 0)
            return 0;
    }

    return 1;
}

void copyPrimeSum(struct node *source, struct node **destination) {
    while (source != NULL) {
        if (isPrime(sumDigits(source->no)))
            addNode(destination, source->no);

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

    printf("Enter source nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &no);
        addNode(&source, no);
    }

    copyPrimeSum(source, &destination);

    printf("Output: ");
    printList(destination);

    return 0;
}
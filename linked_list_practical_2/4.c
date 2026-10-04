/*Write a program that adds the digits of a data element from a singly linear
linked list and changes the data. (sum of data element digits)
Input linked list : |11|->|12|->|13|->|141|->|2|->|158|
Output linked list : |2|->|3|->|4|->|6|->|2|->|14|*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int data) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void addNode(int data) {
    struct node *newNode;
    struct node *temp;

    newNode = createNode(data);

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

int sumDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }

    return sum;
}

void changeData() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        temp->data = sumDigits(temp->data);
        temp = temp->next;
    }
}

void printLL() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        printf("|%d|", temp->data);

        if (temp->next != NULL) {
            printf("->");
        }

        temp = temp->next;
    }

    printf("\n");
}

int main() {
    addNode(11);
    addNode(12);
    addNode(13);
    addNode(141);
    addNode(2);
    addNode(158);

    changeData();

    printf("Output linked list: ");
    printLL();

    return 0;
}

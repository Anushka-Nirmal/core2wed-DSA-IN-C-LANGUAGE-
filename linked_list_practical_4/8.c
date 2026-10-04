/*Program 8.
Write a program that acceptsa doubly linked llst from the user.
Take a number from the user and keep the elements equal In length to that
number and delete other data elements. And print the Linked list
Length of Shashl = 6
Input: linked list:
Input: Enter Length 6
Output: linked list:
|Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
|Shashi |-> | Ashish|*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char str[20];
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(char str[]) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    strcpy(newNode->str, str);
    newNode->prev = NULL;
    newNode->next = NULL;

    return newNode;
}

void addNode(char str[]) {
    struct node *newNode;
    struct node *temp;

    newNode = createNode(str);

    if (head == NULL) {
        head = newNode;
    }
    else {
        temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }
}

void deleteOtherElements(int length) {
    struct node *temp;
    struct node *nextNode;

    temp = head;

    while (temp != NULL) {
        nextNode = temp->next;

        if (strlen(temp->str) != length) {
            if (temp->prev != NULL)
                temp->prev->next = temp->next;
            else
                head = temp->next;

            if (temp->next != NULL)
                temp->next->prev = temp->prev;

            free(temp);
        }

        temp = nextNode;
    }
}

void printList() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        printf("|%s|", temp->str);

        if (temp->next != NULL)
            printf("->");

        temp = temp->next;
    }
}

int main() {
    int n, i, length;
    char str[20];

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter string: ");
        scanf("%s", str);
        addNode(str);
    }

    printf("Input Linked List: ");
    printList();

    printf("\nEnter Length: ");
    scanf("%d", &length);

    deleteOtherElements(length);

    printf("Output Linked List: ");
    printList();

    return 0;
}

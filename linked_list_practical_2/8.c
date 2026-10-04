/*Program 8.
Write a program that accepts a singly linear linked list from the user.
Take a number from the user and only keep the elements that are equal in
length to that number and delete other elements. And print the Linked list
Length of Shashi = 6
Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
Input: 6
Output : linked list: |Shashi |-> | Ashish|*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char str[20];
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(char str[]) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    strcpy(newNode->str, str);
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
    }
}

void deleteOther(int length) {
    struct node *temp;
    struct node *prev;

    while (head != NULL && strlen(head->str) != length) {
        temp = head;
        head = head->next;
        free(temp);
    }

    if (head == NULL) {
        return;
    }

    prev = head;
    temp = head->next;

    while (temp != NULL) {
        if (strlen(temp->str) != length) {
            prev->next = temp->next;
            free(temp);
            temp = prev->next;
        }
        else {
            prev = temp;
            temp = temp->next;
        }
    }
}

void printList() {
    struct node *temp;

    temp = head;

    while (temp != NULL) {
        printf("|%s|", temp->str);

        if (temp->next != NULL) {
            printf("->");
        }

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

    printf("Enter length: ");
    scanf("%d", &length);

    deleteOther(length);

    printf("Output: ");
    printList();

    return 0;
}

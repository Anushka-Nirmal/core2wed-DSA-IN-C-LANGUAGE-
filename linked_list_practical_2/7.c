/*Program 7.
Write a program that accepts a singly linear linked list from the user.
Reverse the data elements from the linked list.
Input: linked list: |Shashi |-> | Ashish|-> |Kanha |-> | Rahul |-> | Badhe |
Output : linked list |ihsahS|-> |hsihsA|->|ahnaK|->|luhaR|->|ehdaB|*/

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

void reverseData() {
    struct node *temp;
    int i, j;
    char ch;

    temp = head;

    while (temp != NULL) {
        i = 0;
        j = strlen(temp->str) - 1;

        while (i < j) {
            ch = temp->str[i];
            temp->str[i] = temp->str[j];
            temp->str[j] = ch;

            i++;
            j--;
        }

        temp = temp->next;
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
    int n, i;
    char str[20];

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter string: ");
        scanf("%s", str);
        addNode(str);
    }

    reverseData();

    printf("Output: ");
    printList();

    return 0;
}

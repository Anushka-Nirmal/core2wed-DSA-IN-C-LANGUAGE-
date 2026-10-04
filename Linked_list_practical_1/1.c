/*WAP for the linked list of malls consisting of its name, number of shops and revenue connect 3 malls in the linked list and print their data*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    char shopName[20];
    int shops;
    float revenue;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode() {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    printf("Enter the name of the mall: ");
    scanf("%s", newNode->shopName);

    printf("Enter total number of shops present in the mall: ");
    scanf("%d", &newNode->shops);

    printf("Enter the total revenue: ");
    scanf("%f", &newNode->revenue);

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
    struct node *temp = head;
    
    while (temp != NULL) {
        printf("\nMall Name: %s", temp->shopName);
        printf("\nNumber of Shops: %d", temp->shops);
        printf("\nRevenue: %.2f\n", temp->revenue);

        temp = temp->next;
    }
}

int main() {
    int n, i;

    printf("Enter number of malls you want to add: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Mall %d:\n", i + 1);
        addNode();
    }

    printLL();

    return 0;
}

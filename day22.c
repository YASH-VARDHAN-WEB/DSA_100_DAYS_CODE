#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, value;
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    // Create linked list
    for(int i = 0; i < n; i++) {
        scanf("%d", &value);

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Traverse and count nodes
    int count = 0;
    temp = head;

    while(temp != NULL) {
        printf("%d ", temp->data);   // printing elements
        count++;
        temp = temp->next;
    }

    // If you want to print count, uncomment below line
    // printf("\nTotal Nodes = %d", count);

    return 0;
}
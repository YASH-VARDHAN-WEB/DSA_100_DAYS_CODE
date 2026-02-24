#include <stdio.h>
#include <stdlib.h>

// Define structure of node
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, key, i;
    struct Node *head = NULL, *temp, *newNode, *prev;

    // Input number of elements
    scanf("%d", &n);

    // Create linked list
    for(i = 0; i < n; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    // Input key to delete
    scanf("%d", &key);

    temp = head;
    prev = NULL;

    // If head node contains key
    if(temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
    } else {
        // Traverse to find key
        while(temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If key found
        if(temp != NULL) {
            prev->next = temp->next;
            free(temp);
        }
    }

    // Print updated list
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
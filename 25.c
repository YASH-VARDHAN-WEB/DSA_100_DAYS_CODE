#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Node {
    int data;
    struct Node* next;
};

int main() {
    int n, key, count = 0;

    // Input number of nodes
    scanf("%d", &n);

    struct Node *head = NULL, *temp = NULL, *newNode = NULL;

    // Create linked list
    for(int i = 0; i < n; i++) {
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

    // Input key
    scanf("%d", &key);

    // Traverse and count occurrences
    temp = head;
    while(temp != NULL) {
        if(temp->data == key) {
            count++;
        }
        temp = temp->next;
    }

    // Output result
    printf("%d\n", count);

    return 0;
}
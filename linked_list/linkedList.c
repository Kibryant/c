#include <stdio.h>
#include <stdlib.h>

// I copied this from chatgpt for teaching purposes kljjkkjk

typedef struct Node {
    int data;
    struct Node* next;
} Node;

void insert(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* myList = NULL;

    insert(&myList, 1);
    insert(&myList, 2);
    insert(&myList, 3);

    printList(myList);

    return 0;
}

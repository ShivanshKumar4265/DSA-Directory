#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node next;
};

void append(struct Node head_ref, int data) 
{
    struct Node new_node = (struct Node)malloc(sizeof(struct Node));
    new_node-data = data;
    new_node-next = NULL;

    if (head_ref == NULL) {
        head_ref = new_node;
        return;
}

    struct Node current = head_ref;
    while (current-next != NULL) {
        current = current-next;
    }
    current-next = new_node;
}

int main() 
{
    struct Node head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);

    struct Node current = head;
    
    while (current != NULL) {
        printf(%d - , current-data);
        current = current-next;
    }
    printf(NULLn);

    return 0;
}

//fixed some things !
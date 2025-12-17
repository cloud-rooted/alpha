#include <stdlib.h>

struct node {
    int data;
    struct node *prev, *next;
};

int main() {
    struct node *head = NULL, *tail = NULL, *n;
    int x;

    printf("Enter elements (-1 to stop): ");
    while (scanf("%d", &x), x != -1) {
        n = malloc(sizeof(*n));
        *n = (struct node){x, tail, NULL};  
        if (tail) tail->next = n;
        else head = n;
        tail = n;
    }

    // Forward traversal
    for (n = head; n; n = n->next) 
        printf("%d ", n->data);
    printf("\n");

    // Backward traversal
    for (n = tail; n; n = n->prev)
        printf("%d ", n->data);
    printf("\n");

    return 0;
}


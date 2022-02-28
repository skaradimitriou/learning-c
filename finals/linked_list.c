#include <stdlib.h>
#include <printf.h>

typedef int elem;

struct node {
    elem data;
    struct node *next;
};

typedef struct node LIST_NODE; // komvos
typedef struct node *LIST_PTR; // deiktis komvou

void LL_init(LIST_PTR *head) {
    *head = NULL;
}

int LL_empty(LIST_PTR head) {
    return head == NULL;
}

int LL_insert_start(LIST_PTR *head, elem x) {
    LIST_PTR newnode;

    newnode = (LIST_NODE *) malloc(sizeof(LIST_NODE));
    if (!newnode) {
        printf("Adunamia desmeusis mnimis");
        return 0;
    }

    newnode->data = x;
    newnode->next = *head;

    *head = newnode;
    return 1;
}

int LL_delete_start(LIST_PTR *head, elem *x) {
    LIST_PTR temp;

    if (*head == NULL) {
        return 0;
    }

    temp = *head;
    *x = temp->data;

    (*head) = (*head)->next;
    free(temp);
    return 1;
}

void LL_print(LIST_PTR head) {
    LIST_PTR current;

    current = head;

    while (current != NULL) {
        printf(" %d |", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int elem;
    LIST_PTR head;

    LL_init(&head);

    if (LL_insert_start(&head, 6)) {
        printf("Added\n");
    } else {
        printf("not added\n");
    }

    LL_print(head);

    if (LL_insert_start(&head, 8)) {
        printf("Added\n");
    } else {
        printf("not added\n");
    }

    LL_print(head);

    if (LL_insert_start(&head, 3)) {
        printf("Added\n");
    } else {
        printf("not added\n");
    }

    LL_print(head);

    return 0;
}
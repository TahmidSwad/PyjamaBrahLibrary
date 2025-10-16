#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node {
    int data;
    struct node* next_node;
}__attribute__((packed)) node_s;

static node_s *__head = NULL;

int init(int data) {
    if (__head != NULL) {
        printf("Linked list already initialized\n");
        return -1;
    }

    // Allocate memory for head node
    __head = malloc(sizeof(node_s));
    if (__head == NULL) {
        printf("Memory allocation failed\n");
        return -2;
    }

    //next_node is NULL for the head node
    //copy data to head node
    __head->next_node = NULL;
    __head->data = data;
    return 0;
}

int add(int data) {

    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }

    // Allocate memory for new node
    node_s *n = malloc(sizeof(node_s));
    if (n == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    n->next_node = NULL;
    n->data = data;
    n->next_node = __head;
    __head = n;
    return 0;
}

int add_end(int data) {

    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }

    // Allocate memory for new node
    node_s *n = malloc(sizeof(node_s));
    if (n == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    n->data = data;
    n->next_node = NULL;

    for(node_s *cursor = __head; cursor != NULL; cursor = cursor->next_node) {
        if (cursor->next_node == NULL) {
            cursor->next_node = n;
            break;
        }
    }

    return 0;
}

int exists(int data) {
    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }
    
    for(node_s *cursor = __head; cursor != NULL; cursor = cursor->next_node) {
        if (cursor->data == data) {
            printf("%d \n", cursor->data);
            return 1;
        }
    }
    return 0;
}

int delete(int data) {
    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }

    for(node_s *cursor = __head, *prev = NULL; cursor != NULL; prev = cursor, cursor = cursor->next_node) {
        if (cursor->data == data) {
            if (prev == NULL) {
                // Deleting head node
                __head = cursor->next_node;
            } else {
                prev->next_node = cursor->next_node;
            }
            free(cursor);
            return 1;
        }
    }
    return 0; // Data not found
}

int insert(int key, int data) {
    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }

    for(node_s *cursor = __head; cursor != NULL; cursor = cursor->next_node) {
        if (cursor->data == key) {
            // Allocate memory for new node
            node_s *n = malloc(sizeof(node_s));
            if (n == NULL) {
                printf("Memory allocation failed\n");
                return -1;
            }

            n->data = data;
            n->next_node = cursor->next_node;
            cursor->next_node = n;
            return 0;
        }
    }
    printf("Key %d not found\n", key);
    return -2; // key not found
}

void traverse() {
    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return;
    }

    
    for(node_s *cursor = __head; cursor != NULL; cursor = cursor->next_node) {
        printf("%d ", cursor->data);
    }
    printf("\n");
    return;
}
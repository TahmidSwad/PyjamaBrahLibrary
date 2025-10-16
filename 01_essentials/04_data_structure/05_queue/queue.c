#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"


typedef struct node {
    int data;
    struct node* next_node;
}__attribute__((packed)) node_s;

static node_s *__head = NULL;
static node_s *__tail = NULL;

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
    __tail = __head;
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

    n->data = data;
    n->next_node = NULL;

    __tail->next_node = n;
    __tail = n;
    return 0;
}

int search(int data) {
    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }
    
    for(node_s *cursor = __head; cursor != NULL; cursor = cursor->next_node) {
        if (cursor->data == data) {
            printf("%d exists\n", cursor->data);
            return 1;
        }
    }
    return 0;
}

int fetch() {
    if (__head == NULL) {
        printf("Linked list not initialized\n");
        return -1;
    }
    int data = __head->data;
    node_s *temp = __head;
    __head = __head->next_node;
    free(temp);
    return data;
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
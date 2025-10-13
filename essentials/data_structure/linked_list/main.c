
#include "sll.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    init(10);       
    add(20);
    add(30);
    add(40);
    add(50);
    add_end(5); 
    add_end(4);
    add_end(3);
    add_end(2);
    add_end(1);
    traverse();
    printf("Exists 30: %d\n", exists(30));
    printf("Exists 31: %d\n", exists(31));

    delete(30);
    traverse();
    insert(20, 25);
    traverse(); 
    insert(100, 25); // Key not found

    return 0;
}
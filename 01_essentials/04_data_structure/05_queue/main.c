#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

int main() {

    init(10);       
    add(20);
    add(30);
    add(40);
    add(50);
    traverse();
    search(30);
    printf("Fetched: %d\n", fetch());
    traverse();

    return 0;
}
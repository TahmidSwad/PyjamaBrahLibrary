#include <stdio.h>

typedef int swad;

int main() {
    swad a = 10;
    int size = sizeof(a);
    printf("Size of swad is: %d\n", size);
    return 0;
}
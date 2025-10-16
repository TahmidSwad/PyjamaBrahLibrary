#include <stdio.h>

void main() {
    char c = 'A';
    char *c_ptr = &c;

    printf("Value of c: %c\n", c);
    printf("Address of c: %p\n", &c);
    printf("Value of c_ptr (address of c): %p\n", c_ptr);
    printf("Value pointed to by c_ptr: %c\n", *c_ptr);
    printf("Address of c_ptr: %p\n", &c_ptr);
    return;
}
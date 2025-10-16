#include <stdio.h>

void main() {
    int i = 10;

    printf("i: %d, &i: %p, *&i: %d, *&*&i: %d, *&*&*&i: %d\n", i, &i, *&i, *&*&i, *&*&*&i);

    *&*&*&i = 20;
    printf("i: %d, &i: %p, *&i: %d, *&*&i: %d, *&*&*&i: %d\n", i, &i, *&i, *&*&i, *&*&*&i);

    // &&&i = 30;
    // printf("i: %d, &i: %p, *&i: %d, *&*&i: %d, *&*&*&i: %d\n", i, &i, *&i, *&*&i, *&*&*&i);
}
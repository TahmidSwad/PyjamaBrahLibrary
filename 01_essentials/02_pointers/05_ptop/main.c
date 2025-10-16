#include <stdio.h>

void main() {
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;
    int ***pppi = &ppi;

    printf("%p, %p, %p, %p\n", &i, pi, ppi, pppi);
    printf("%p, %p, %p, %p\n", &i, &pi, &ppi, pppi);
}

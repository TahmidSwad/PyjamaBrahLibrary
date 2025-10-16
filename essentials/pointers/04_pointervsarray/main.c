#include <stdio.h>

void main() {
    char *name_ptr = "PIYUSH";
    char name_array[] = "piyush";

    /* 1. similarity between array and pointers */
    printf("name_ptr: %s, name_prt: %p, *name_prt: %c\n",
            name_ptr,     name_ptr,     *name_ptr);

    printf("name_array: %s, name_array: %p, *name_array: %c\n",
            name_array,     name_array,     *name_array);

    /* 2. Difference between array and pointers #1 */
    printf("sizeof(name_ptr): %lu, sizeof(name_array): %lu\n", sizeof(name_ptr), sizeof(name_array));

    int x[] = {10, 11, 12};
    int *xptr = x;

    printf("sizeof(xptr): %lu, sizeof(x): %lu\n", sizeof(xptr), sizeof(x));

    /* 3. Array cannot be reassigned but pointer can be! */
    int a[] = {110, 111, 112};
    int i = 1024;
    //a = &i;
    xptr = a;
    int *iptr = &i;
}

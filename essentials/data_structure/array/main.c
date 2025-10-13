#include <stdio.h>

int main() {
    char p[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    printf("8th element: %c\n", p[8]);
    printf("sizeof(p): %ld\n", sizeof(p));

    char q[2][10];
    printf("sizeof(q): %ld\n", sizeof(q));
    printf("address of q[0][0] : %p, q[1][0]: %p\n", &q[0][0], &q[1][0]);

    char r[2][3][10];
    printf("sizeof(r): %ld\n", sizeof(r));


    return 0;

}
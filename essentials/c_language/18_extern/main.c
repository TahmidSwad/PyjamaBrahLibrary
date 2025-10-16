#include <stdio.h>

extern int a;
extern void foo();

int main() {
    a = a + 1;
    printf("main : %d\n", a);
    foo();
    return 0;
}


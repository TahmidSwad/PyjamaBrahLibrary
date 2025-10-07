#include <stdio.h>

int main() {
    {
        auto int a = 10; // 'auto' is optional in C, only available in block scope
        printf("Value of a: %d\n", a);
    }
    printf("Variable a is not available here\n");
    return 0;
}
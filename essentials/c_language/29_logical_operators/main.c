#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;

    int c;

    printf("c = a && b: %d\n", c = a && b); // Logical AND
    printf("c = a || b: %d\n", c = a || b); // Logical OR
    printf("c = !a: %d\n", c = !a);       // Logical NOT
    printf("c = !b: %d\n", c = !b);       // Logical NOT
    
    return 0;
}
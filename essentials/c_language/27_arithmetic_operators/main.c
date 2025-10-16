#include <stdio.h>

int main() {
    // int a = 10;
    // int b = 3;
    char a = 127;
    char b = 3;

    printf("a + b = %d\n", a + b); // Addition
    printf("a + b = %d\n", (char)(a + b)); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division
    printf("a % b = %d\n", a % b); // Modulus

    printf("a++ = %d\n", a++); // Post-increment
    printf("++a = %d\n", ++a); // Pre-increment

    printf("b-- = %d\n", b--); // Post-decrement
    printf("--b = %d\n", --b); // Pre-decrement
    return 0;
}
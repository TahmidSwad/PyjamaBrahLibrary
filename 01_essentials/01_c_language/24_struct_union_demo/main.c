#include <stdio.h>

struct complex_number {
    float real;
    float imag;
};

union xyz {
    int a;
    char b;
    long int c;
};

int main() {
    struct complex_number num1;
    num1.real = 3.0;
    num1.imag = 4.0;    
    printf("Complex Number: %.2f + %.2fi\n", num1.real, num1.imag); 
    
    union xyz u;
    printf("Size of union xyz: %zu bytes\n", sizeof(union xyz)); 
    u.a = 0x0f000041;
    printf("Union xyz values: a=%x, b=%c, c=%lx\n", u.a, u.b, u.c);
    u.a = 0x0f000042;
    printf("Union xyz values: a=%x, b=%c, c=%lx\n", u.a, u.b, u.c);
    u.a = 0x0fff0042;
    printf("Union xyz values: a=%x, b=%c, c=%lx\n", u.a, u.b, u.c);
    u.c = 0xff00000041;
    printf("Union xyz values: a=%x, b=%c, c=%lx\n", u.a, u.b, u.c);
     
    return 0;
}
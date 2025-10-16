#include <stdio.h>

int main(){
    int a = 1;
    unsigned int b = 1;

    printf("a << 31 hex: %x\n", a << 31);
    printf("a << 31 dec: %d\n", a << 31);

    printf("(a << 31) >> 4: %x\n", (a << 31) >> 4); // MSB is 1, so fills with 1
     printf("(b << 31) >> 4: %x\n", (b << 31) >> 4);
}
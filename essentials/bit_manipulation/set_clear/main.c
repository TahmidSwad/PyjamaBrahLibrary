#include <stdio.h>

int main() {
    int victim = 0xabcdef12;
    int mask = 0xff << 8; // 0x0000ff00

    printf("victim: 0x%x\n", victim);
    printf("mask:   0x%x\n", mask); 

    mask = ~mask; // 0xffff00ff
    printf("inverted mask: 0x%x\n", mask);  

    printf("masked victim: 0x%x\n", victim & mask); // 0xabcd00ff
 
    mask = 0xff; // 0x000000ff
    mask = mask | (mask << 16);
    printf("expanded mask: 0x%x\n", mask);
    printf("expanded masked victim: 0x%x\n", victim & mask); // 0x00cd00ff
    return 0;
}
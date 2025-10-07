#include <stdio.h>

struct pixel_t {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    
    int l;
//};
}__attribute__((packed));

union sample_union
{
    int a;
    char b;
    short c;
};


int main() {
    struct pixel_t pixel = {255, 0, 0}; // Red pixel

    printf("Pixel RGB values: R=%d, G=%d, B=%d\n", pixel.r, pixel.g, pixel.b);
    printf("Size of pixel_t struct: %zu bytes\n", sizeof(struct pixel_t));

    union sample_union u;
    u.a = 42;
    printf("Union sample_union values: a=%d, b=%d, c=%d\n", u.a, u.b, u.c);
    printf("Size of sample_union: %zu bytes\n", sizeof(union sample_union));
    return 0;
}
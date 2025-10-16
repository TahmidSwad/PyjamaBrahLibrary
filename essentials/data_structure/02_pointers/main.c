#include <stdio.h>

typedef struct _abc{
    int p;
    char q;
    float r;
} abc;

typedef struct _xyz{
    int j;
    char k;
    float l;
} __attribute__((packed))xyz;

typedef struct _def{
    int u;
    xyz  v;
    float w;
}def;

typedef struct _def2{
    int u;
    xyz  v;
    float w;
}__attribute__((packed)) def2;

int main(){
    int num = 101;
    int *ptr = &num;
    printf("Size of int pointer: %zu bytes\n", sizeof(ptr));
    printf("&ptr: %p\n", &ptr);
    printf("ptr: %p\n", ptr);
    printf("*ptr: %d\n", *ptr);
    *ptr = *ptr + 20;
    printf("*ptr: %d\n", *ptr);

    struct _def2 swad[10];

    swad[5].u = 55;
    swad[5].v.j = 11;

    struct _def2 *p = &swad[5];
    printf("swad[5].u: %d\n", (*p).u);
    printf("swad[5].v.j: %d\n", (*p).v.j);
    printf("swad[5].u: %d\n", p->u);
    printf("swad[5].v.j: %d\n", p->v.j);
}
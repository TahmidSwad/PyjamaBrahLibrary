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
    printf("sizeof(struct _abc): %ld\n", sizeof(struct _abc));

    abc o;
    printf("sizeof(o): %ld\n", sizeof(o));
    printf("&o.p: %p\n", &o.p);
    printf("&o.q: %p\n", &o.q);
    printf("&o.r: %p\n", &o.r);

    xyz m;
    printf("sizeof(m): %ld\n", sizeof(m));
    printf("&m.j: %p\n", &m.j);
    printf("&m.k: %p\n", &m.k);
    printf("&m.l: %p\n", &m.l);

    def n;
    printf("sizeof(n): %ld\n", sizeof(n));
    printf("&n.u: %p\n", &n.u);
    printf("&n.v: %p\n", &n.v);
    printf("&n.w: %p\n", &n.w);

    def2 e;
    printf("sizeof(e): %ld\n", sizeof(e));
    printf("&e.u: %p\n", &e.u);
    printf("&e.v: %p\n", &e.v);
    printf("&e.w: %p\n", &e.w);

    def swad[10];
    printf("sizeof(swad): %ld\n", sizeof(swad));

    def2 swad2[10];
    printf("sizeof(swad2): %ld\n", sizeof(swad2));

    printf("&swad2[6].b: %p\n", &swad2[6].v);

    return 0;
}
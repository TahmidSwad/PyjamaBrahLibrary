#include <stdio.h>

// extern int x;
void doo();

void foo(){
    int a =10;
    a = a + 1;
    printf("foo: %d\n", a);
    return;
}

void bar(){
    static int a = 3;
    a = a + 1;
    printf("bar: %d\n", a);
    return;
}

void tar(){
    static int a = 3;
    a = a + 1;
    printf("tar: %d\n", a);
    return;
}

int main() {
    // x = x + 1;
    // printf("main: %d\n", x);
    doo();
    doo();
    foo();
    foo();
    bar();
    bar();
    tar();  
    tar();
    return 0;
}


#include <stdio.h>

void function_1(int a) {
  printf("function_1(): a = %d\n", a);
}

void function_2(int b) {
  printf("function_2(): b = %d\n", b);
}

typedef void (*func_ptr)(int);

int main() {
    func_ptr pf;
    pf = function_1;
    pf(10);

    func_ptr qf;
    qf = &function_2;
    qf(20);

    return 0;
}

#include <stdio.h>

int main() {
  int a = 29; // 0001 1101
  int b = 23; // 0001 0111

  printf("a: %d, b: %d\n", a, b);
  printf("a & b: %d\n", a & b);   // AND
  printf("a | b: %d\n", a | b);   // OR
  printf("a ^ b: %d\n", a ^ b);   // XOR
  printf("~a: %d\n", ~a);         // NOT
  printf("b << 1: %d\n", b << 1); // Left Shift
  printf("b >> 1: %d\n", b >> 1); // Right Shift

  return 0;
}
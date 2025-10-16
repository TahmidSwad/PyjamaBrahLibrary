#include <stdio.h>

void main() {
  char a = 'A';
  int b = 1024;
  float c = 1.0;
  long long int d = 12345;

  char *pa = &a;
  int *pb = &b;
  float *pc = &c;
  long long int *pd = &d;

  printf(" sizeof(*pa): %lu\n sizeof(*pb): %lu\n sizeof(*pc): %lu\n "
         "sizeof(*pd): %lu\n\n",
         sizeof(*pa), sizeof(*pb), sizeof(*pc), sizeof(*pd));

  *pa = 'B';
  *pb = *pb + 1;
  *pc = *pc + 1;
  *pd = *pd + 1;

  printf(" a: %c\n b: %d\n c: %f\n d: %lld\n\n", *pa, *pb, *pc, *pd);
}

#include <stdio.h>

int main() {
  int i = 10;

  void *pi = &i;

  printf("pi: %p, &i: %p\n", pi, &i);
  //printf("*pi: %d\n", *pi);

  int *p = NULL;
  printf("%p, 0x%llu\n", NULL, (long long unsigned int)NULL);
  //printf("%d\n", *p);

  return 0;
}

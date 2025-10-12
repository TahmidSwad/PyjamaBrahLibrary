#include <stdio.h>
#include <stdlib.h>


#define REQUEST 1 * 1024 * 1024 * 1024

int main() {
//   int *p = (int *)malloc(400);

//   printf("before: %d\n", *p);
//   *p = 4;
//   printf("after: %d\n", *p);

//   free(p);



  int *p;

  for (int i = 0; i < 1000000; i++) {
    p = (int *)malloc(REQUEST);
    printf("i:%d: p: %p\n", i, p);
    if (p == NULL)
      return -1;
  }


  return 0;
}

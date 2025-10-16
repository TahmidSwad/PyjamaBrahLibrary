#include <stdio.h>
#include "magic.h"
#include "magic2.h"

extern const char msg[];

int main() {
    printf("%s\n", msg);
    printf("The magic number: %d\n", MAGIC_NUMBER);
    printf("The magic number2: %d\n", MAGIC_NUMBER2);
    return 0;
}
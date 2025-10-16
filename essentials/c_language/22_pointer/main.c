#include <stdio.h>

int main() {
    char abc = 'Z';
    char *ptr = &abc;
    printf("address of abc: %p  ptr: %p  size of abc = %ld  size of ptr = %ld\n", &abc, ptr,sizeof(abc), sizeof(ptr));
    printf("value of abc: %c  dereferenced value of ptr: %c\n", abc, *ptr);

    *ptr = 'A';
    printf("address of abc: %p  ptr: %p  size of abc = %ld  size of ptr = %ld\n", &abc, ptr,sizeof(abc), sizeof(ptr));
    printf("value of abc: %c  dereferenced value of ptr: %c\n", abc, *ptr);
    
    char number[4];
    int *in_ptr = &number[0];

    *in_ptr = 0x00214948;
    printf("Value at in_ptr: %s\n", &number[0]);

    *in_ptr = 0x00484921;
    printf("Value at in_ptr: %s\n", &number[0]);
    
    return 0;

}
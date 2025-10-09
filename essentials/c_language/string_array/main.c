#include <stdio.h>

int main() {
    char c = 'A';
    char *c1 = "A";
    printf("Sizeof c = %ld\n", sizeof(c));
    printf("Size of address of c = %ld\n", sizeof(&c));
    printf("Size of dereferenced address of c = %ld\n", sizeof(*&c));
    printf("Sizeof c1 = %ld\n", sizeof(c1));
    printf("Size of dereferenced c1 = %ld\n", sizeof(*c1));
    printf("\n");

    char arr[] = "ABC";
    printf("Sizeof arr = %ld; which is : %s\n", sizeof(arr), arr);
    printf("Sizeof arr address = %ld\n", sizeof(&arr));
    printf("Size of dereferenced arr = %ld, which is %c\n", sizeof(*arr), *arr);
    printf("\n");

    //array is just a pointer to the first element of the array
    //string is just an array of characters terminated by a null character '\0'
    //so string is a pointer to the first character of the string
    //string literal is stored in read-only memory, so it cannot be modified
    //but array of characters can be modified
    char *parr;
    char arr1[] = "abc";
    char *arr2 = "xyz";
    char arr3[] = {'a', 'b', 'c', '\0'}; //same as arr1

    parr = arr1;
    printf("parr points to: %s\n", parr);

    parr = arr2; 
    printf("parr points to: %s\n", parr);

    parr = arr3; 
    printf("parr points to: %s\n", parr);

    printf("First character of arr: %c, address: %p\n", arr[0], &arr[0]);
    printf("Second character of arr: %c, address: %p\n", arr[1], &arr[1]);
    printf("Third character of arr: %c, address: %p\n", arr[2], &arr[2]);
    printf("Fourth character of arr: %c, address: %p\n", arr[3], &arr[3]);
    printf("\n");

    int arr4[] = {1, 2, 3, 4, 5};
    printf("First element of arr4: %d, address: %p\n", arr4[0], &arr4[0]);
    arr4[0] = 10; // Modifying the first element
    printf("Modified first element of arr4: %d, address: %p\n", arr4[0], &arr4[0]);
    
    return 0;
}
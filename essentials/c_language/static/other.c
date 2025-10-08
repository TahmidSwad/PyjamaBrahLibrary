#include <stdio.h>

static int x = 10;

//static void doo(){
void doo(){
    x = x + 1;
    printf("doo: %d\n", x);
    return;
}
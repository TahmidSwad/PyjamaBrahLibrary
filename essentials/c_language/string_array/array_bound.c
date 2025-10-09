#include <stdio.h>

int main(){
    int x[2] = {1, 2};
    int y[2] = {3, 4};
    int z[2] = {5, 6};
    y[2] = 101;

    printf("x2 = %d\n", x[2]); 
    
    printf("z2 = %d\n", z[0]);
}
#include <stdio.h>

int main(void){
    int x = 5;
    int y = 3;
    int z = x*x;

    printf("x + y = %d", x+y);
    printf("x - y = %d", x-y);
    printf("z = %d",z);
    printf("z - y = %d", z-y);
    return 0;
}
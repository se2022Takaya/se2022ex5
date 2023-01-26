#include <stdio.h>

int main(void){
    int x = 5;
    int y = 3;
    int z = x*x;
    int d;

    printf("z = %d\n",z);
    printf("z - y = %d\n", z-y);
    printf("Please push randam number:");
    scanf("%d",&d);
    printf("\n your number - x = %d",d-x);
    return 0;
}
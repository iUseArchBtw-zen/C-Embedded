#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

int main(void){
    int a = 2;
    float z1 = cosf(a) + sinf(a) + cosf(3 * a) + sinf(3 * a);
    float z2 = 2 * sqrtf(2) * cosf(a) * sinf((M_PI/4) + 2*a);

    printf("Z1: %f\n", z1);
    printf("Z2: %f\n", z2);
    return 0;

}
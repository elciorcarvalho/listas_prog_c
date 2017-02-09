#include <stdio.h>
float grau = 0;

float rad(float *g){
    float rd;
    rd = *g * (3.1416 / 180);
    return rd;
}

void main(void){
    while(grau <= 360.0){
        printf("%d graus = %.4f rad\n", (int)grau, rad(&grau));
        grau += 5.0;
    }
    getchar();
}

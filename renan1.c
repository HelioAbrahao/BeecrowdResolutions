#include <stdio.h>
#include <math.h>

int main(){
    float v0,t;
    float s;
    const float g = 9.81;

    printf("Digite a velocidade (m/s) e o tempo (s): \n");
    scanf("%f %f", &v0, &t);

    s = v0 * t - g * pow(t,2.0)/2;

    printf("O desolocamento foi de %f m.\n", s);

    return 0;
}
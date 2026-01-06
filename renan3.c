#include <stdio.h>

int main(){
    float a1, a2, a3;
    float p1, p2, p3;
    float media;

    scanf("%f %f %f %f %f %f", &a1, &a2, &a3, &p1, &p2, &p3);
    
    media = ((a1 * p1) + (a2 * p2) + (a3 * p3))/ (p1 + p2 + p3);

    printf("A media ponderada e: %.2f", media);

return 0;
}
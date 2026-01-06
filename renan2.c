#include <stdio.h>

int main(){
    int c, f;
    printf("Escreva uma temperatura em Celsius:\n ");
    scanf("%i", &c);

    f = (9/5)* c + 32;

    printf("A temperatura em Fahrenheit é: %i \n", f);

return 0;
}
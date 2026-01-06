#include <stdio.h>

int troca(int *a, int *b){
    int aux = *a;

    *a = *b;

    *b = aux;

    printf("troca -> a = %d e b = %d\n", *a, *b);
}

int main(){
    int a = 1;

    int b = 2;

    printf("main -> a = %d e b = %d\n", a, b);

    troca(&a, &b);

    printf("main -> a = %d e b = %d\n", a, b);
}
/* Saída:
main -> a = 1 e b = 2
troca -> a = 2 e b = 1
main -> a = 2 e b = 1

*/

/*
Aqui a operacão de troca apresenta efeito tanto dentro da 
funcao troca quando na main, pois as variáveis de mesmo nome
de ambas funcões possuem o mesmo endereco de memória, isto é
, são as mesmas.

*/
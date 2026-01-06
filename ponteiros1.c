#include <stdio.h>
int main(){
    int var = 230;
    int * ponteiro = &var; // O ponteiro vai apontar para o endereco de var.
    printf("%d\n", *ponteiro);

    *ponteiro = 789; // O valor que se encontra no endereco de memória apontado pelo ponteiro vai ser alterado para 789.
    printf("%d", var);

    return 0;
}

/*
A tarefa é basicamente alterar o valor de uma variável por meio da utilizacão de um ponteiro. 
*/
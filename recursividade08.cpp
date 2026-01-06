#include <bits/stdc++.h>
using namespace std;

/*
EXERCÍCIO 8: SOMA DE ELEMENTOS PARES EM UM VETOR

Descrição: Escreva uma função recursiva que retorna a soma de todos os elementos pares em um vetor.

Entrada: 5
         1 2 3 4 5
Saída: 6
*/

int somaPares(int vetor[], int index){ 
    if (index == 0) return 0;
    int elementoAtual = vetor[index - 1]; // vetor[index - 1] é equivalente a literalmente o último elemento do vetor, uma vez que a contagem dos elementos comeca em 0.
    if(elementoAtual % 2 == 0)
        return elementoAtual + somaPares(vetor, index - 1);
            else
        return somaPares(vetor, index - 1);
    }

int main(){
    int index;
    cin >> index;
    int vetor[index];

    for(int i = 0; i < index; i++){
        cin >> vetor[i];
    }

    cout << somaPares(vetor, index) << endl;
    
    return 0;
}
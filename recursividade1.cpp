/*
EXERCÍCIO 1: SOMA DOS DÍGITOS

Descrição: Escreva uma função recursiva que recebe um número inteiro n e retorna a soma de seus dígitos.
Entrada: 1234
Saída: 10

1 + 2 + 3 + 4 = 10

Como caralhos fazer isso de forma recursiva? PENSAR DE FORMA MATEMÁTICA PRIMEIRO! 
Sempre pensar no caso base primeiramente. Qual o caso base desse exemplo? 
if(n == 0) return 0;

*/

#include <bits/stdc++.h>
using namespace std;
// Funcão recursiva responsável por somar os algarismos de um número:

int sumNumerals(int num){
    if(num == 0) return 0;
    return (num % 10) + sumNumerals(num/10);
}

int main(){
    int number;
    cin >> number;

    cout << sumNumerals(number) << endl;

    return 0;
}
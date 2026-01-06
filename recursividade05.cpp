#include <bits/stdc++.h>
using namespace std;

/*
EXERCÍCIO 5: POTÊNCIA DE UM NÚMERO

Descrição: Escreva uma função recursiva que calcula a potência a^b (a elevado a b).

Entrada: 2 3
Saída: 8
*/

int pot (int num, int q){ // num -> Base potencia / q -> expoente da potência
    if(q == 0) return 1;
    return num * pot(num, q - 1);
}


int main(){
    int num, q;
    cin >> num >> q;

    cout << pot(num, q) << endl;

    return 0;
}
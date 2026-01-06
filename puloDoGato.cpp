#include <bits/stdc++.h>
using namespace std;

/*

Só gosta de pular de uma lajota preta para outra lajota preta. Pode andar uma distância ou duas distâncias por pulo.
Quer chegar na lajota da direita com o número mínimo de pulos possíveis. 

Entrada -> 
Primeira linha contém um inteiro C, representando o número de lajotas do pátio. 
Segunda linha contém C inteiros idicando a cor das lajotas, da inicial(esquerda) à final(direita). 
VALOR 1 -> Lajota Preta.
VALOR 2 -> Lajota Branca.

*/
int main(){
    int c, posiGato = 0, q = 0;
    cin >> c;
    int lajotas[c];

    for(int i = 0; i < c; i++){
        cin >> lajotas[i]; // 1 -> Preta        2 -> Branca
    }

    while(posiGato < c - 1){
        if(posiGato + 2 < c && lajotas[posiGato + 2] == 1){
            posiGato += 2;
        }else if(posiGato + 1 < c && lajotas[posiGato + 1] == 1){
            posiGato += 1;
        }else{
            cout << -1 << endl;
            return 0;
        }
        q++;
    }

    cout << q << endl;

    return 0;
}

// Se não for possível pular até a lajota final, imprima -1.
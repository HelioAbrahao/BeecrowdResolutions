#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, movimentos[1010];
    char posi;
    cin >> n;
    cin >> posi;

    for(int i = 0; i < n; i++){
        cin >> movimentos[i];
    }

    for(int i = 0; i < n; i++){
        if(posi == 'A' && movimentos[i] == 1){
            posi = 'B';
        }else if(posi == 'A' && movimentos[i] == 3){
            posi = 'C';
        }else if(posi == 'B' && movimentos[i] == 1){
            posi = 'A';
        }else if(posi == 'B' && movimentos[i] == 2){
            posi = 'C';
        }else if(posi == 'C' && movimentos[i] == 2){
            posi = 'B';
        }else if(posi == 'C' && movimentos[i] == 3){
            posi = 'A';
        }
    }

    cout << posi << endl;

    return 0;
}

/*

Um jogador troca a posicão de dois copos, arrastando os copos de tal modo que se a moeda está em baixo de um dos copos envolvidos
no movimento, ela continua embaixo do mesmo copo após a troca de posicão. O jogador pode realizar três tipos de movimento.

Posicões - A    B    C 
1 - Trocar a posicao A com a B.
2 - Trocar a posicao B com a C.
3 - Trocar a posicao A com a C.

Nesta tarefa, dadas a descrição da sequência de movimentos e a posição inicial da moeda, você deve escrever um programa que 
determine a posição final da moeda após todos os movimentos.
*/
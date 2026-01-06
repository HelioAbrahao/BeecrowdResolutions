#include <iostream>
using namespace std;

int main(){
/*
Dois jogadores participam, o jogador 1 escolhe entre par ou ímpar, então cada jogador escolhe um inteiro positivo, se a soma desse números for par e o jogador 1 tiver escolhido par então o jogador 1 ganha, se a soma dor ímpar o jogador 2 ganha. Caso o jogador 1 tivesse escolhido ímpar ele ganharia se a soma fosse ímpar, caso a soma fosse par o jogador 2 ganharia. 

O 1 pode roubar e o 2 pode acusar ou não o 2 de roubo. 
*/
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a; 

    // p == 1 (jogador 1 escolheu par) p == 2 (jogador 1 escolher impar)
    // j1, j2 representam o número escolhido pelo jogador 1 e pelo jogador 2 
    // r representa se o jogador 1 roubou (se r == 1 entao o jogador roubou se r == 0 entao o jogador 1 nao roubou)
    // a representa se o jogador 2 acusou o roubo (se a == 1 entao o jogador 2 acusou o jogador 1 de roubo, se a == 0 entao ele nao acusou o jogador 1 de roubo)

    if(p == 1 && ((j1 + j2) % 2) != 0){
        if(r == 1 && a == 0){ 
            cout << "Jogador 1 ganha!" << endl;  
        } else if (r == 1 && a == 1){
            cout << "Jogador 2 ganha!" << endl;  
        } else {
            cout << "Jogador 2 ganha!" << endl; 
        }
    } else if(p == 1 && ((j1 + j2) % 2) == 0)  {
        if(r == 1 && a == 0){ 
            cout << "Jogador 1 ganha!" << endl;  
        } else if (r == 1 && a == 1){
            cout << "Jogador 2 ganha!" << endl;
             
        } else {
            cout << "Jogador 1 ganha!" << endl;  
        }
    } else if(p == 0 && ((j1 + j2) % 2) == 0){
        if(r == 1 && a == 0){ 
            cout << "Jogador 1 ganha!" << endl;  
        } else if (r == 1 && a == 1){
            cout << "Jogador 2 ganha!" << endl;  
        } else {
            cout << "Jogador 2 ganha!" << endl;  
        }
    } else if(p == 0 && ((j1 + j2) % 2) != 0){
        if(r == 1 && a == 0){ 
            cout << "Jogador 1 ganha!" << endl; 
        } else if (r == 1 && a == 1){
            cout << "Jogador 2 ganha!" << endl; 
        } else {
            cout << "Jogador 1 ganha!" << endl;
        }
    }
    return 0; 
}  

/*
p = 1
j1 + j2 = im
*/
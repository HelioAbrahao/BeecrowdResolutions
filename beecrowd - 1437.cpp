#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int number;
    vector <char> rosa_dos_ventos = {'N', 'L', 'S', 'O'};
    while(cin >> number && number != 0){
        string valores; 
        cin >> valores;

        int contador = 0;
        for(int i = 0; i < valores.size(); i++){
            if(valores[i] == 'D'){
                contador++;
            } else {
                contador--; 
            }
        }

// DDDDDDDE
// 6

        int posicao_final = (contador % 4 + 4) % 4;
        cout << rosa_dos_ventos[posicao_final] << endl; 
    }

    return 0; 
}


/*
- Ai inves de virar para a direita, vira para a esquerda, causando grande confusão do batalhao. 

N L S O
0 1 2 3


*/

// N -> L -> S -> O -> N -> L -> S

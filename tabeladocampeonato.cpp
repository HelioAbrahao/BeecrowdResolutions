#include <bits/stdc++.h>
using namespace std;

/*
numero de jogos
numero de pontos
numero de vitorias (cada vitoria vale três pontos)
numero de empates (cada empate vale um ponto)
numero de derrotas (derrotas nao valem pontos)

Minha tarefa é escrever um programa para completas as informacões encontradas na caderneta.

Entrada -> J, P, V, E e D
Um ou dois desses números tem o valor -1, indicando que o número é ilegível na caderneta. Todos os casos da entrada têm solucão.

J = V + E + D
P = 3 * (V + E)
*/

int main(){
    int J, P, V, E, D;
    cin >> J >> P >> V >> E >> D;

// Qualquer um desses valores pode ser -1, o que significa que ele precisa ser substituido na hora de imprimir.

    if(V == -1){
        if(P != -1 && E != -1){
            V = (P - E)/3;
        }else{
            if(P == -1){
                V = J - E - D;
            }
            if(E == -1){
                V = (P + D - J)/2;
            }
        }
    }

    if(E == - 1){
        if(P != -1){
             E = P - (3 * V);
        }else{
            if(P == -1){
                E = J - V - D;
            }
        }
    }

// Aqui eu já encontrei o valor de V e E.

    P = 3 * V + E;

// Aqui já encontrei o valor de P, falta só J e D.

    if(D == -1){
        D = J - E - V;
    }
    
    J = V + E + D;

    cout << J << " " << P << " " << V << " " << E << " " << D << endl;

    return 0;
}
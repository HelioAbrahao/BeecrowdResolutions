/*
Entrada

A entrada contém vários casos de teste. A primeira linha de um caso de teste contém dois inteiros B e N, indicando 
respectivamente o número de bancos e o número de debêntures emitidas pelos bancos. Os bancos são identificados por 
inteiros entre 1 e B. A segunda linha contém B inteiros Ri​ separados por espaços, indicando as reservas monetárias 
de cada um dos B bancos. As N linhas seguintes contêm cada uma três inteiros separados por espaços: um inteiro D, 
indicando o banco devedor, um inteiro C, indicando o banco credor, e um inteiro V, indicando o valor da debênture.

O final da entrada é indicado por uma linha que contém apenas dois zeros, separados por um espaço em branco.
*/

#include <iostream>
using namespace std;
int main(){
    int B,N, fundo[21], D, C, V;
    cin >> B >> N;

    for(int i = 0; i < B; i++){
        cin >> bancos[i];
    }
    for(int i = 0; i < N; i++){
        cin >> D >> C >> V;
        if((D + C) < V){
            cout << "N" << endl;
        }else{
            cout << "S" << endl;
        }
    }
    return 0;
}

/*
N -> Número de debêntures
B -> Número de bancos
Ri -> Reservas monetarias 
D -> Banco devedor
C -> Banco credor
V -> Valor da debênture

O que o problema basicamente pede que eu realize? 
'S', se for possível liquidar todos as debêntures sem intervenção do Banco Central da Nlogônia, e 'N', se algum banco
precisar de empréstimos do governo para liquidar suas debêntures.
*/
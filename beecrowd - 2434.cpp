#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N, S; // N -> numero de dias do periodo de interesse | S -> Saldo da conta no início do período
    cin >> N >> S;

    int contador_geral = S;
    int menor_valor = INFINITY;

    for(int i = 0; i < N; i++){
        int valor_inserido; 
        cin >> valor_inserido; 

        contador_geral += valor_inserido;
        if(menor_valor > contador_geral){
            menor_valor = contador_geral; 
        }
    }

    cout << menor_valor << endl;

    return 0; 
}
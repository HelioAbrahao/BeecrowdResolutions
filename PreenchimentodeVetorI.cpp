#include <iostream>
using namespace std;
/*
    O programa precisa basicamente, a partir do primeiro elemento do
vetor, preencher todos os elementos seguintes. A questão é que cada
elemente precisa ser igual ao dobro do elemento anterior. Exemplo:
V[8] = {2, 4, 8, 16, 32, 64, 128, 256}; 
*/
int main(){
    int N[10];

    cin >> N[0];
    cout << "N[0] = "  << N[0] << " " << endl;
    
    for(int i = 0; i < 9; i++){
        N[i + 1] = 2 * N[i]; 
    }

    for(int i = 1; i < 10; i++){
        cout << "N[" << i << "] = " << N[i] << " " << endl; 
    }
    
    return 0;
}
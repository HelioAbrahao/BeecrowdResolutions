#include <iostream>
using namespace std;

int main(){
    int par[5];
    int impar[5];
    int total[15];

    for(int i = 0; i < 15; i++){
        cin >> total[i];
    }


    int contadorPar = 0;
    int contadorImpar = 0;
    for(int i = 0; i < 15; i++){
        if(total[i] % 2 == 0){
            par[contadorPar] = total[i];
            contadorPar++; 
        } else {
            impar[contadorImpar] = total[i];
            contadorImpar++;
        }
    }

    for(int i = 0; i < 5; i++){
        cout << par[i] << endl;
    } else {
        cout << impar[i] << endl;
    }

    return 0; 
}
#include <iostream>
using namespace std;

int main(){
    bool quadradoMagico;
    int q = 2;
    int matriz[3][3];
    int somaL[3] = {0,0,0};
    int somaC[3] = {0,0,0};
    int DiagonalP = 0;
    int DiagonalS = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            somaL[i] += matriz[i][j];
            somaC[i] += matriz[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        DiagonalP += matriz[i][i];
    }
    
    for(int i = 0; i < 3; i++){
        DiagonalS += matriz[q][i];
        q--;
    }
    
    for(int i = 0; i < 3; i++){
        if(somaL[i] != somaL[0] || somaC[i] != somaL[0] || DiagonalP != somaL[0] || DiagonalS != somaL[0]){
            quadradoMagico = false;
        }else{
            quadradoMagico = true;
        }
    }
    
    if(quadradoMagico){
        cout << "SIM" << endl;
    }else{
        cout << "NAO" << endl;
    }
    return 0;
}
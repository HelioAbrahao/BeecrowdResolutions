#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int matriz[10][10];
    int somaLinha[10] = {0}, somaColuna[10] = {0};
    int diagonalP = 0, diagonalS = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaLinha[i] += matriz[i][j];
            somaColuna[i] += matriz[j][i];
        }
    diagonalP += matriz[i][i];
    diagonalS += matriz[i][n - 1 - i];
    }

    bool quadradoMagico = true;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Esse é o principal loop desse programa ->
    for(int i = 0; i < n; i++){
        if(somaLinha[i] != somaLinha[0] || somaColuna[i] != somaColuna[0] || diagonalP != somaLinha[0] || diagonalS != somaLinha[0]){
            quadradoMagico = false;
            break;
        }
    }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if(quadradoMagico){    // if checa se o que está dentro dele não vale 0 (false). 
        cout << somaLinha[0];
    }else{
        cout << "-1";
    }

    return 0;
}
#include<iostream>
using namespace std;

bool funcaoVerificacao(int matriz2x2[2][2]){
    int contador1 = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(matriz2x2[i][j] == 1){
                contador1++;
            }
        }
    }

    if(contador1 >= 2){
        return true;
    } else {
        return false;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int N;
    cin >> N;

    int matriz[N+1][N + 1];
    for(int i = 0; i < N+1; i++){
        for(int j = 0; j < N+1; j++){
            cin >> matriz[i][j]; 
        }      
    }

    for(int i = 0; i <  N; i ++){
        for(int j = 0; j < N; j ++){
            int subMatriz[2][2] = {
                                   {matriz[i][j], matriz[i][j + 1]},
                                   {matriz[i + 1][j], matriz[i + 1][j + 1]}
                                  }; 
            if(funcaoVerificacao(subMatriz)){
                cout << "S"; 
            } else {
            cout << "U";
        }
    }
        cout << endl; 
    }

    return 0; 
}

// Uma quadra é considerada segura se existem câmeras em, pelo menos, duas de suas quatro esquinas. No centro de Portland todas as quadras são quadrados de mesmo tamanho. 
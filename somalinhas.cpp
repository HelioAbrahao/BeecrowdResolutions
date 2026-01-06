#include <iostream>
using namespace std;

int main(){
    int matriz[3][3];
    int sLinhas[3] = {0,0,0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sLinhas[i] += matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        cout << "Linha " << i << ": " << sLinhas[i] << endl;
    }
    return 0;
}
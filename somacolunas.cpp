#include <iostream>
using namespace std;

int main(){
    int matriz[3][3], Scolunas[3] = {0, 0, 0}, q = 0;;


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            Scolunas[j] += matriz[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        cout << "Coluna " << i << ": " << Scolunas[i] << endl;
    }


    return 0;
}
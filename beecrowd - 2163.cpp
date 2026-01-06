#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findLS (vector<vector<int>> matriz, int X, int Y){
    pair <int, int> coordenadas; 
    for(int i = 1; i < X - 1; i++){
        for(int j = 1; j < Y - 1; j++){
            if(matriz[i][j] == 42 && matriz[i][j - 1] == 7 && matriz[i][j + 1] == 7 && matriz[i + 1][j] == 7 && matriz[i - 1][j] == 7 && matriz[i - 1][j - 1] == 7 && matriz[i - 1][j + 1] == 7 && matriz[i + 1][j - 1] == 7 && matriz[i + 1][j + 1] == 7){
                coordenadas = make_pair(i + 1, j + 1);
                return coordenadas; 
            }
        }
    }

    coordenadas = make_pair(0, 0);
    return coordenadas; 
}

int main(){
    int X, Y;
    cin >> X >> Y; 

    vector<vector<int>> matriz(X, vector<int>(Y));

    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            cin >> matriz[i][j]; 
        }
    }

    pair<int, int> resultado = findLS(matriz, X, Y);

    cout << resultado.first << " " << resultado.second << endl; 

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    double M[12][12], soma = 0.0;
    char O;

    cin >> O;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 0; i < 11; i++){
        for(int j = 1 + i; j < 12; j++){
            soma += M[i][j];
        }
    }

    if(O == 'S'){
        cout << soma << endl;
    }else{
        cout << soma/66 << endl;
    }
    return 0;
}
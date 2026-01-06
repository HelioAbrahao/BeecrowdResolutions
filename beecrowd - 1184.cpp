#include <iostream>
using namespace std;

int main(){
    int q = 0;
    double M[12][12], soma = 0.0;
    char O;

    cin >> O;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int j = 0; j < 11; j++){
        for(int i = 1 + q; i < 12; i++){
            soma += M[i][j];
        }
    q++;
    }

    if(O == 'S'){
        cout << soma << endl;
    }else{
        cout << soma/66 << endl;
    }
    return 0;
}
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

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 11 - i; j++){
            soma += M[i][j];
        }
    }

    if(O == 'S'){
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << soma << endl;
    }else{
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << soma/66 << endl;
    }

    return 0;
}
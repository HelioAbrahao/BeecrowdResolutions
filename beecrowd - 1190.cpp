#include <iostream>
using namespace std;

int main(){
    int q = 0;
    double M[12][12], soma = 0;
    char O;

    cin >> O;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int j = 11; j > 6; j--){
        for(int i = 1 + q; i < 11 - q; i++){
            soma += M[i][j];
        }
        q++;
    }

    if(O == 'S'){
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << soma << endl;
    }else{
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << soma/30 << endl;
    }

    return 0;
}
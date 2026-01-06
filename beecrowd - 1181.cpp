#include <iostream>
using namespace std;

int main(){
    float M[12][12];
    float somaL = 0;
    float mediaL = 0;
    int a;
    char c;
    cin >> a;
    cin >> c;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    
    if(c == 'S'){
        for(int i = 0; i < 12; i++){
            somaL += M[a][i];
        }
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << somaL << endl;
    }
    
    if(c == 'M'){
        for(int i = 0; i < 12; i++){
            somaL += M[a][i];
        }
        mediaL = somaL/12;
        cout.precision(1);
        cout.setf(ios::fixed);
        cout << mediaL << endl;
    }

    return 0;
}

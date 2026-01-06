#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x = 0, y = 0;
    cin >> x;

    for(int i = 0; i < x; i++){
        cin >> y;
        if(y % 2 == 0){
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}

/*
O raciocínio necessário por trás do programa é simples. Caso o numero seja ímpar, o resultado é 1; caso o número seja par, o resultado é 0.

S = 1 - 1 + 1 - 1 + 1 - 1 + 1...
    1   2   3   4   5   6   7
*/
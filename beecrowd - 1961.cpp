#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p = 0, n = 0; 
    cin >> p >> n;
    
    vector <int> tamanhos(n);
    
    for(int i = 0; i < n; i++){
        cin >> tamanhos[i];
    }

    int tamanhomaximo = 0, tamanhotemporario = 0;
    for(int i = 0; i < n - 1; i++){
        tamanhotemporario = abs(tamanhos[i + 1] - tamanhos[i]);
        tamanhomaximo = max(tamanhomaximo, tamanhotemporario);
    }

    if(tamanhomaximo > p){
        cout << "GAME OVER" << endl;
    } else {
        cout << "YOU WIN" << endl;
    }

    return 0;
}
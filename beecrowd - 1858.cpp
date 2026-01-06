#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 0, menor = 0;
    cin >> N; 

    if(N <= 0) return 0;

    vector <int> armazena(N);

    for(int i = 0; i < N; i++){
        cin >> armazena[i];
    }

    for(int i = 0; i < N; i++){
        if(armazena[i] < armazena[menor]){
            menor = i;
        }
    }
    
    cout << menor + 1 << endl;
    
    return 0;
}
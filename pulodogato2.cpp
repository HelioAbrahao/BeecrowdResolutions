#include <bits/stdc++.h>
using namespace std;

int main(){
    int c, posiGato = 0, q = 0;
    cin >> c;
    int lajotas[c];

    for(int i = 0; i < c; i++){
        cin >> lajotas[i];
    }

    while(posiGato < c - 1){
        if(posiGato + 2 < c && lajotas[posiGato + 2] == 1){
            posiGato += 2;
        } else if(posiGato + 1 < c && lajotas[posiGato + 1] == 1){
            posiGato += 1;
        } else{
            cout << -1 << endl;
            return 0;
        }
    q++;
    }
    
    cout << q << endl;
    
    return 0;
}
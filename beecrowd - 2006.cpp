#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{}, contador{};
    cin >> n;

    for(int i = 0; i < 5; i++){
        int a{};
        cin >> a;
        if(a == n){
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
/*
(1) chá branco
(2) chá verde
(3) chá preto
(4) chá de ervas 
*/
#include <bits/stdc++.h>
using namespace std;

void saida(int x){
    if(x <= 800) cout << 1 << endl;
    if(x > 800 && x <= 1400) cout << 2 << endl;
    if(x > 1400 && x <= 2000) cout << 3 << endl;
}

int main(){
    int x;
    cin >> x;

    saida(x);
    return 0;
}
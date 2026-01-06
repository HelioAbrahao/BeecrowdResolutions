#include <bits/stdc++.h>
using namespace std;

// Esse programa basicamente tem como saída, a fase do campeonato, a qual dos competidores irão se enfrentar a partir da colocacão do sorteio inicial das posicões.

int k, l;
int main(){
    cin >> k >> l;
    k -= 1;
    l -= 1;

    if(k/2 == l/2) cout << "oitavas" << endl;
    else if(k/4 == l/4) cout << "quartas" << endl;
    else if(k/8 == l/8) cout << "semifinal" << endl;
    else if(k/16 == l/16) cout << "final" << endl;
// Lembrando que apenas os valores inteiros serão comparados. Uma vez que no C++, uma divisão entre inteiros resulta em outro inteiro.

    return 0;
}
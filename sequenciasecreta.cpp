#include <bits/stdc++.h>
using namespace std;

/*
Dada uma sequencia de uns e dois. Definir circulos ao redor dos números dessa maneira:
1 2 1 2 2 2 1 1 1 2 2 1 1 1
- - - -     -     -   -      = Essa soma resultaria em 7.


1  2  1  2  1  1
            

Como conseguir fazer essa contagem de maneira correta? 
    Se o número da frente for diferente do número anterior somar mais um ao contador.
*/

int main(){
    int n, sequencia[505], somatoria = 1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> sequencia[i];
    }

    for(int i = 1; i < n; i++){
        if(sequencia[i] != sequencia[i - 1]){
            somatoria++;
        }
    }

    cout << somatoria << endl;
    return 0;
}
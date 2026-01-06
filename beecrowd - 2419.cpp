#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, N;  // Linhas e Colunas
    cin >> M >> N;
    char praia[M + 2][N + 2];
    int sumComCosta = 0;

    memset(praia, '.', sizeof(praia));

    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++){
            cin >> praia[i][j];
        }
    }
    
    for(int i = 1; i <= M; i++){
        for(int j = 1; j <= N; j++){
            if(praia[i][j] == '#'){
                if(praia[i + 1][j] == '.' || praia[i - 1][j] == '.' || praia[i][j - 1] == '.' || praia[i][j + 1] == '.'){
                sumComCosta++;
                }
            }
        }
    }
    cout << sumComCosta << endl;

    return 0;
}

/*
- Para fazer seu planejamento, precisa saber a estensão da costa nlogônica. 
- Considera-se que um quadrado é parte da costa nlogônica se ele é um quadrado ocupado por terra que tem um lado em comum com um 
quadrado ocupado por água.
*/

/*
ENTRADA:
    - Dois inteiros M e N indicando, o número de linhas e o número de colunas do mapa. 
    - Cada uma das M linhas seguintes contém N caracteres: um caractere '.' indica que aquele quadrado do território é ocupada
por água; '#' indica que aquele quadrado do território é ocupada por terra.
    - Considere que todo o espaco fora da área do mapa é ocupado por água.
*/
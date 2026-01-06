#include <bits/stdc++.h>
using namespace std;

/*
N, I e F, indicando respectivamente o tamanho do vetor e o valor mínimo da soma e o valor máximo da soma.

[45, 12, 11, 7, 83, 29, 5]

*/

int main(){
    int vetor[1010], I, F, N, q = 0;
    cin >> N >> I >> F;

    for(int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(vetor[i] + vetor[j] >= I && vetor[i] + vetor[j] <= F){
                q++;
            }
        }
    }

    cout << q;
    return 0;
}
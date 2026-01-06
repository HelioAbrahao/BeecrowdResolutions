#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, somatoria = 1, resposta = 0, anterior; 
    cin >> n;
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    anterior = vetor[0];

    for(int i = 1; i < n ; i++){
        if(vetor[i] == anterior){
            somatoria++;
        }else{
            somatoria = 1;
            anterior = vetor[i];
        }
    resposta = max(resposta, somatoria);
    }

    cout << resposta << endl;
    
    return 0;
}
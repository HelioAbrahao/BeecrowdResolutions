#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int vetor[n], anterior, resposta = 0, soma = 0;
    
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    anterior = vetor[1];
    
    for(int i = 1; i <= n; i++){
        if(vetor[i] == anterior){
            soma++;
        }else{
            soma = 1;
            anterior = vetor[i];
        }
        resposta = max(resposta, soma);
    }

return 0;
}
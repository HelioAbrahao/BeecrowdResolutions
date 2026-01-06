#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        string texto;
        cin >> texto; 

        int quantidadeDeNumeros = 0; 
        bool estaDentroDeUmNumero = false; 

        for(int i = 0; i < texto.size(); i++){ 
            char caractereAtual = texto[i]; 

            if(isdigit(caractereAtual)){
                if(!estaDentroDeUmNumero){
                    quantidadeDeNumeros++; 
                    estaDentroDeUmNumero = true; 
                }
            } else {
                estaDentroDeUmNumero = false; 
            }
        } 

        string vetor[quantidadeDeNumeros];
        
        int contador = -1;
        bool dentroDeNumero = false;

        for(int i = 0; i < texto.size(); i++){
            if(isdigit(texto[i])){
                if(!dentroDeNumero){
                    contador++;
                    dentroDeNumero = true;
                }
                vetor[contador] += texto[i]; 
            } else {
                dentroDeNumero = false; 
            }
        }
        
        int soma_resultado = 0; 
        for(int i = 0; i < quantidadeDeNumeros; i++){
            soma_resultado += stoi(vetor[i]);
        }

        cout << soma_resultado << endl; 
    }

    return 0; 
}
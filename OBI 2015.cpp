#include <iostream>
using namespace std;
/*
Dada uma sequência de zeors e uns, calcular quantas vezes o padrão ¨100¨ aparece nela.
Como posso fazer isso?
Posso utilizar um programa que a partir de uma posicão do vetor, verifica a posicão anterior e posterior.
Tendo em mente que a posicão central do 100 é 0, vou realizar essa verificacão a partir de um 0 encontrado no vetor, de modo
que esse 0 não seja o primeiro elemento. E de modo que o ultimo elemento tenha seus 2 anteriores verificados.
*/

int main(){
    int n;
    int vetor[10000];
    int saida;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }
    for(int i = 0; i < n; i++){
        if(vetor[i] == 0 && i > 0 && i < n-1){
            if(vetor[i - 1] == 1 && vetor[i + 1] == 0){
                saida++;
            }
        }
    }
    cout << saida << endl;
    return 0;
}
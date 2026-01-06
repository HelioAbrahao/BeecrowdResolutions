#include <iostream>
using namespace std;

/*
    O programa precisa basicamente ler os elementos de uma matriz e a partir da entrada desses elementos, definir qual o maior
elemento e subtituir o mesmo por -1 todas as vezes que ele aparece. Além disso, precisamos imprimir a matriz com os valores
substituidos no final do programa.
*/
int main(){
    int vetor[3][3], maxv = -1000000;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> vetor[i][j];
            maxv = max(vetor[i][j], maxv); // Condicão para guardar o maior valor.
        }
    }
    
    for(int i = 0; i < 3; i++){ // Linhas 
        for(int j = 0; j < 3; j++){ // Colunas
            if(vetor[i][j] == maxv){
                cout << "-1" << " ";
            }else{
                cout << vetor[i][j] << " ";
            }
        }
    cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

/*
Nesse problema, eu preciso basicamente trocar os elementos
opostos. Primeiro com ultimo, segundo com antipenultimo etc.
*/
int main(){
    int vetor[20];//, j = 19;

    for(int i = 0; i < 20; i++){
        cin >> vetor[i];
    } // Aqui eu basicamente realizei a entrada de todos os elementos do vetor.

    // Agora preciso realizar a inversão. Pensar como fazer isso.

    for(int i = 0; i < 10; i++){ // Atencão a essa parte, tem algum erro aqui. 
        int aux = vetor[i];
        //vetor[i] = vetor[j];
        //vetor[j] = aux; 
        //j--;
        // Essa seria uma maneira de fazer. A outra meneira é melhor e mais inteligente. 
        vetor[i] = vetor[19 - i];
        vetor[19 - i] = aux;
    }

    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n, vetor[55];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
// Vamos supor que o valor de n seja 5 
// vetor [0] vetor[1] vetor[2] vetor[3] vetor[4] 
// i =    0        1        2        3        4
    }
    
    for(int i = 0; i < n; i++){
        int total = 0; /* Há a necessidade de reinicializar total para 0 a cada iteracão.
total precisa ser zerado a cada nova iteracão. Isso garante que total não acumule valores
das iteracões anteriores.
Então, pensar da seguinte forma: Se um código que possui um loop for não estiver funcionando direito, 
prestar atencão em onde as variáveis estão sendo inicializadas, principalmente se tratando de variáveis 
que envolvem a soma de valores de um vetor.    */
        
        total = total + vetor[i];
        if(i > 0){
            total = total + vetor[i - 1];
        }
        if(i < n - 1){
            total = total + vetor[i + 1];
        }
        cout << total << endl;
    }
return 0;
}
#include <iostream>

using namespace std;

int soma_vetor(int n, int v[]){
	// Deve retornar um int: a soma dos n elementos do vetor v;
    int somatoria = 0;
    for(int i = 0; i < n; i++){ // PRESTAR ATENCÃO NA HORA DE DECLARAR VARIÁVEIS DENTRO DE UM LOOP FOR. A CHANCE DE INICIALIZAR UMA VARIÁVEL COM O VALOR = 0 TODA
// VEZ QUE O LOOP FOR ITERADO É MUITO GRANDE! NÃO SEJA BURRO!
        somatoria += v[i];
    }
    return somatoria;
}

int main(){
	
	int n, v[100100];
	cin >> n;
	
	for(int i=0;i<n;i++)
		cin >> v[i];

	cout << soma_vetor(n,v) << "\n";
}

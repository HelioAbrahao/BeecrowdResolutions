
/*
Primeira maneira de resolver:

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Dados N números o programa retorna a raiz quadrada de cada um desse números.
    int n;
    cin >> n;
    double entrada, resultado[n];
    for(int i = 0; i < n; i++){ // Esse loop for serve basicamente para preencher os valores do vetor com as raízes.
        cin >> entrada;
        resultado[i] = {sqrt(entrada)};
    }
    for(int i = 0; i < n; i++){
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << resultado[i] << endl;
    }
    return 0;
}

// Nunca se deve declarar o valor do vetor dentro do for. Isso é um problema porque a variável declarada dentro do bloco do 
// for só existe dentro desse bloco. Em vez disso, você deve declarar o vetor fora do for e apenas atribuir valores dentro do loop.
*/

// Segunda maneira de resolver: 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double x;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(x) << endl;
    }

    return 0;
}
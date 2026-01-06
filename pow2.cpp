/* 
Vamos supor que eu precise encontrar a raiz n-ésima de m. Como faria isso por meio da utilizacão da funcão pow?
m por exemplo é igual a 16 e eu preciso achar a raiz quarta de m. Nesse caso é bem tranquilo de saber que a 
resposta é igual a 2(2 * 2 * 2 * 2 = 16). Mas poderiamos utilizar o mesmo algoritmo em um exercício mais 
complicado relacionado a esse tema. 
 */
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n,m;

    cin >> n >> m;

    cout << pow(n,1/m) << endl;
    return 0;
}
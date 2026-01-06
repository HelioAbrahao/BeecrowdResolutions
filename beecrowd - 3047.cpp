#include <bits/stdc++.h>
using namespace std;

int main(){
/* 
    A soma das idades dos seus três filhos é igual à idade dela. A saída tem que ser 
    a idade do filho mais velho de dona mônica. Lembrando que nem sempre a idade que 
    falta, é a idade do filho mais velho.

    Como garantir que a saída será o maior número? Não desistir desse exercício.
*/

    int m, a, b; // m -> Idade da Mônica 
    cin >> m >> a >> b;

    int idadeTerceiroFilho;

    idadeTerceiroFilho = m - (a + b);

    int idadeMaisVelho = max(a, max(b, idadeTerceiroFilho));

    cout << idadeMaisVelho << endl;
    
return 0;
}
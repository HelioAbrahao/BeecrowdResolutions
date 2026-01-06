#include <bits/stdc++.h>
using namespace std;

struct pais{
    int ouro, prata, bronze, id;
};

int func(pais a, pais b){ // Funcão comparativa que serve como parametro para o sort.
    if(a.ouro != b.ouro) {
        return a.ouro > b.ouro; // Ordem decrescente. Maior para o menor.
    }
    if(a.prata != b.prata) {
        return a.prata > b.prata;
    }
    if(a.bronze != b.bronze){
        return a.bronze > a.bronze;
    }
    return a.id < b.id;
}



int main(){
    int n,m;
    int o, p, b;
    pais v[105];
/*
    v[0] = ouro = 0;
           prata = 0;
           bronze = 0;
           id = 1;


*/
    cin >> n >> m; // n -> Quantidade de países.
                   // m -> Quantidade de modalidades.

    for(int i = 0; i < n; i++){
        /*
        Pensar como se todos as variáveis declaradas dentro da struct estivessem dividindo uma mesma
posicão do vetor. Assim é mais tranquilo para imaginar a situacão.
        
        struct pais{
    int ouro, prata, bronze, id;
};
        */
        
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze = 0;
        v[i].id = i + 1; // i + 1? -> Basicamente define o "nome" dos países como números inteiros.
    }


    /*
    Caso o seja igual a 5.
    v[5 - 1].ouro++;
    
    */

    for(int i = 0; i < m; i++){ // m -> número
        //     2    1    2
        cin >> o >> p >> b; // A entrada é qual país (número inteiro) ganhou ouro, prata e bronze respectivamente.
        v[o - 1].ouro++; // v[1].ouro++; -> País que ocupa a 1 posicão vai receber uma medalha de ouro.
        v[p - 1].prata++;// v[0].prata++;
        v[b - 1].bronze++;// v[1].bronze++;
    }
    
    sort(v,v+n,func);
    for(int i = 0; i < n; i++){
        cout << v[i].id << " ";
    }
return 0;
}
/*
2 2                2 1
2 1 2                          País 2 está na posicão 1.   Pais 2 tem 1 ouro, 1 prata e 2 bronzes. 
1 2 2                          País 1 está na posicão 2.   Pais 1 tem 1 ouro e 1 prata.

4 3                4 3 2 1
3 2 1 
4 3 1 
4 3 1 
*/

/*

int func(pais a, pais b){ // Funcão comparativa que serve como parametro para o sort.
    if(a.ouro != b.ouro) {                                                    Quantidade de ouro de 1 = 2, quantidade de ouro de 2 = 1
        return a.ouro > b.ouro; // Ordem decrescente. Maior para o menor.           
    }
    if(a.prata != b.prata) {
        return a.prata > b.prata;
    }
    if(a.bronze != b.bronze){
        return a.bronze > a.bronze;
    }
    return a.id < b.id;
}

*/
#include <iostream>
using namespace std;
// Escreva uma função que retorna a soma dos primeiros n números naturais maiores que 0. 

int somaNaturais(int n){
    if(n == 1){
        return 1;
    }

    return n + somaNaturais(n - 1);
}

int main(){
    int n;
    cin >> n;

    cout << somaNaturais(n) << endl;

    return 0;
}
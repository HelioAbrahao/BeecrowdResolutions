#include <bits/stdc++.h>
using namespace std;

/*
 - Os clientes podem parcelar as compras sem juros no cartão, em até 18 vezes.
 - Quando o valor V da compra é divisível pelo número P de parcelas que o cliente escolhe, todas as parcelas terão o mesmo valor.
 - V -> Valor da compra. P -> Número de parcelas.
 - Se o valor da compra não for divisível pelo número de parcelas será preciso fazer um ajuste, pois a empresa quer que todas as
parcelas tenham sempre um valor inteiro e somem no total, claro, o valor exato da compra.
*/

int main(){
    int V, P;
    cin >> V >> P;

    if(V % P == 0){
      for(int i = 0; i < P; i++){
        cout << V/P << endl;
      }  
    }

    int variavel;
    if(V % P != 0){
        variavel = V % P;
        for(int i = 0; i < variavel; i++){
            cout << V/P + 1 << endl;
        }

        for(int i = 0; i < P - variavel; i++){
            cout << V/P << endl;
        }
    }

return 0;
}
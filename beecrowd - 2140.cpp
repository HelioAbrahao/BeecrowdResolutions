#include <iostream>
using namespace std;

int main(){
    int valor_compra, valor_pago; 
    while(cin >> valor_compra >> valor_pago && valor_compra != 0 && valor_pago != 0){
        int contador = 0; 
        int troco_total = valor_pago - valor_compra; 

        if(troco_total == 1){
            cout << "impossible" << endl;
            continue; 
        }

        while(troco_total > 0){
            if(troco_total - 100 >= 0){
                troco_total -= 100; 
                contador++;
            } else if(troco_total - 50 >= 0){
                troco_total -= 50;
                contador++;
            } else if(troco_total - 20 >= 0){
                troco_total -= 20;
                contador++;   
            } else if(troco_total - 10 >= 0){
                troco_total -= 10;
                contador++; 
            } else if(troco_total - 5 >= 0){
                troco_total -= 5;
                contador++;
            } else if(troco_total - 2 >= 0){
                troco_total -= 2; 
                contador++; 
            }
        }
        
        if(contador == 2){
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl; 
        }
    }

    return 0; 
}
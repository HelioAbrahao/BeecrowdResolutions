#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valor;
    cin >> valor;

    if(valor <= 2000.00){
        cout << "Isento" << endl;
    } else if(valor > 2000.00 && valor <= 3000.00){
        cout << "R$ " << fixed << setprecision(2) << (valor - 2000.00) * 0.08 << endl;
    } else if(valor > 3000.00 && valor <= 4500.00){
        double retorno, valor_restante;
        valor_restante = valor - 3000;
        retorno = (1000 * 0.08);
        cout << "R$ " << fixed << setprecision(2) << retorno + valor_restante * 0.18 << endl;
    } else if(valor > 4500.00){
        double retorno, valor_restante;
        valor_restante = valor - 4500;
        retorno = (1000 * 0.08) + (1500 * 0.18);
        cout << "R$ " << fixed << setprecision(2) << retorno + valor_restante * 0.28 << endl;
    } 

    return 0;
}
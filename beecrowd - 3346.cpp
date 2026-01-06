#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    /*
    Cada flutuação é expressa por uma porcentagem, de modo que uma porcentagem positiva indica crescimento naquele período de um ano, enquanto que uma porcentagem negativa indica decrescimento.

    Com base nos dois valores coletador por Alice, Bob deseja calcular a flutuação do PIB correspondente ao período todo dos dois anos analisados.
    */

    double valor1, valor2;
    cin >> valor1 >> valor2; 

    // Subtrair o valor do PIB inicial do valor do PIB final, dividir o resultado pelo valor do PIB inicial e multiplicar por 100 para obter a variação percentual

    double variacao = (((1 + valor1/100.00)*(1 + valor2/100.00)) * 100); 
    cout << fixed << setprecision(6) << variacao - 100 << endl; 

    return 0;
}
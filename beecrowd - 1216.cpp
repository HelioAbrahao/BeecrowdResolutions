#include <bits/stdc++.h>
using namespace std;

int main(){
    string nome;
    int distancia;
    double soma = 0; 
    int contador = 0; 

    while(getline(cin, nome) && cin >> distancia){
        cin.ignore();
        soma += distancia; 
        contador++; 
    }

    //if(contador > 0){
        cout << fixed << setprecision(1) << soma/contador << endl; 
    //}
    
    return 0;
}
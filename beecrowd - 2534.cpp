#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    /*    
    Os cidadãos são ordenados de acordo com suas notas (quanto maior a nota, melhor) e recebem descontos no imposto de renda de acordo com sua qualificação. 

    Escreva um programa que dado o número de habitantes da Nlogôia e todas as notas obtidas, responda as consultas para retornar a nota do cidadão que ficou em determinada posição. 
    */

    int numero_habitantes, numero_consultas; 
    while(cin >> numero_habitantes >> numero_consultas){
        vector<int> notas; 

        for(int i = 0; i < numero_habitantes; i++){
            int valor;
            cin >> valor; 
            notas.push_back(valor);  
        }

        sort(notas.begin(), notas.end(), greater<int>());

        for(int i = 0; i < numero_consultas; i++){
            int number;
            cin >> number;

            int right_value = number - 1;

            cout << notas[right_value] << endl; 
        }
    }
     
    return 0; 
}
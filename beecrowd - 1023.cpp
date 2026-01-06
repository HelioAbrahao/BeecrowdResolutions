#include <iostream>
#include <iomanip>
#include <map>
#include <cmath>
using namespace std;

int main(){
    int casos_teste; 
    int contador_cidade = 1; 
    
    while(cin >> casos_teste && casos_teste != 0){
        multimap<int, int> pessoas_consumos; 
        double variavel_consumo_total = 0;
        int quantidade_total_pessoas = 0;
        
        for(int i = 0; i < casos_teste; i++){
            int X, Y;
            cin >> X >> Y;

            int consumo_por_pessoa = Y / X;

            // chave = consumo_por_pessoa, valor = moradores
            pessoas_consumos.insert({consumo_por_pessoa, X});

            variavel_consumo_total += Y;
            quantidade_total_pessoas += X;
        }

        cout << "Cidade# " << contador_cidade++ << ":" << endl;

        for(auto it = pessoas_consumos.begin(); it != pessoas_consumos.end(); ++it){
            cout << it->second << "-" << it->first;
            auto prox = it; ++prox;
            if(prox != pessoas_consumos.end()) cout << " ";
        }
        cout << endl; 

        double media = variavel_consumo_total / quantidade_total_pessoas;
        media = floor(media * 100) / 100.0; // truncar em 2 casas decimais
        cout << "Consumo medio: " << fixed << setprecision(2) << media << " m3." << endl;

        cout << endl;
    }

    return 0;
}

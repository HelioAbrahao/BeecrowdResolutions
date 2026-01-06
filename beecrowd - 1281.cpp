#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main(){
    int idas_feira;
    cin >> idas_feira;

    map <string, double> frutas_preco_unidade;
    map <string, int> frutas_quantidade;

    for(int i = 0; i < idas_feira; i++){
        frutas_preco_unidade.clear();
        frutas_quantidade.clear();
        
        int quantidade_frutas1;
        cin >> quantidade_frutas1; 
        for(int j = 0; j < quantidade_frutas1; j++){
            string nome_fruta;
            double valor_unidade_fruta;

            cin >> nome_fruta >> valor_unidade_fruta;

            frutas_preco_unidade[nome_fruta] = valor_unidade_fruta;
        }

        int quantidade_frutas2; 
        cin >> quantidade_frutas2; 
        for(int j = 0; j < quantidade_frutas2; j++){
            string nome_fruta;
            int quantidade_fruta;
            cin >> nome_fruta;
            cin >> quantidade_fruta;

            frutas_quantidade[nome_fruta] = quantidade_fruta;  
        }

        double valor_total = 0; 
        for(auto it = frutas_preco_unidade.begin(); it != frutas_preco_unidade.end(); it++){
            valor_total += frutas_quantidade[it->first] * it->second; 
        }

        cout << "R$ " << fixed << setprecision(2) << valor_total << endl;
    }

    return 0;
}
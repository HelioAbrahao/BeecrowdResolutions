#include <iostream>
#include <vector>
using namespace std;

int main(){

    int number;
    while(cin >> number){
        vector<pair<int, char>> botas(number); 
        for(int i = 0; i < number; i++){
            int tamanho;
            char direito_esquerdo; 
            cin >> tamanho;
            cin >> direito_esquerdo; 
            cin >> botas[i].first >> botas[i].second; 
        }

        // ----------------------------------------------------------------

        int contador = 0; 
        size_t i = 0; 

        while(i < botas.size()){
            bool encontrou_par = false; 
            for(size_t j = i + 1; j < botas.size(); j++){
                if(botas[i].first == botas[j].first && botas[i].second != botas[j].second){
                    botas.erase(botas.begin() + j); // Apaga o elemento com índice maior primeiro
                    botas.erase(botas.begin() + i); // Apaga o elemento com menor índice depois
                    contador++; 
                    encontrou_par = true; 
                    break;
                }
            }

            if(!encontrou_par){
                i++; 
            }
        }
        cout << contador << endl; 
    }
    return 0; 
}

/*
    Botas de vários tamanhos para seus soldados. 
    Por uma falha de empacotamento da fábrica contratada, nem todas as caixas entregues continham um par de botas correto, com duas botas do mesmo tamanho, uma para cada pé.
    - Sargento mandou que retirassem todas as botas de todas as caixas para reembala-las desta vezs corretamente. 
    - Dada a lista contendo a descrição de cada bota entregue, determina quantos pares corretos de botas poderão ser formados no total. 

    // EOF
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Ela retira as 5 primeiras cartas do topo de um baralho bem embaralhado, e as coloca em sequência, da esquerda para a direita, na mesa, com as faces voltadas para baixo. 
    // Usando apenas a memória, Beatriz deve agora dizer se a sequência de cartas está ordenada crescentemente, descrescentemente, ou não está ordenada. 

    // A entrada consiste de uma única 

    vector<int>entrada;
    vector<int>entrada_crescente;
    vector<int>entrada_decrescente; 

    for(int i = 0; i < 5; i++){
        int valor;
        cin >> valor;

        entrada.push_back(valor);
        entrada_crescente.push_back(valor); 
        entrada_decrescente.push_back(valor); 
    }

    sort(entrada_crescente.begin(), entrada_crescente.end());
    sort(entrada_decrescente.begin(), entrada_decrescente.end(), greater<int>());

    // cout << endl; 
    // cout << "---------------------------------------------------------" << endl; 

    // for(int i = 0; i < 5; i++){
    //     cout << entrada_crescente[i] << " ";
    // }
    // cout << endl; 

    // cout << "---------------------------------------------------------" << endl; 

    // for(int i = 0; i < 5; i++){
    //     cout << entrada_decrescente[i] << " "; 
    // }

    // cout << endl; 

    bool confirm1 = true; // é ordenada na ordem crescente
    bool confirm2 = true; // é ordenada na ordem decrescente
    for(int i = 0; i < entrada.size(); i++){
        
        if(entrada[i] != entrada_crescente[i]){
            confirm1 = false;
        } 

        if(entrada[i] != entrada_decrescente[i]){
            confirm2 = false;
        }
    }

    if(confirm1 == false && confirm2 == false){
        cout << "N" << endl; 
    }else if(confirm1 == true){
        cout << "C" << endl;
    }else{
        cout << "D" << endl; 
    }

    return 0;
}
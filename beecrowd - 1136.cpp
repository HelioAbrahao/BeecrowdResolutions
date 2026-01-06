#include <iostream>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int N, B; // N -> NUMEROS DA CARTELA BASICAMENTE
              // B -> REPRESENTA O NUMERO DE BOLAS QUE PERMANECERAM NO GLOBO. 
    while(cin >> N >> B && N != 0 && B != 0){
        set<int> verificacoes;
        vector<int> inteiros;
        vector<int>bolas(B);
        
        for(int i = 0; i < B; i++){
            cin >> bolas[i]; 
        }

        int sub = 0; 
        for(int i = 0; i < bolas.size(); i++){
            for(int j = 0; j < bolas.size(); j++){
                sub = abs(bolas[i] - bolas[j]);
                verificacoes.insert(sub); 
            }
        }

        // for(auto it = verificacoes.begin(); it != verificacoes.end(); it++){
        //     cout << *it << " "; 
        // }
        // cout << endl; 
        // cout << "--------------------------" << endl; 

        // for(int i = 0; i <= N; i++){
        //     inteiros.push_back(i); 
        // }

        // for(int i = 0; i < inteiros.size(); i++){
        //     cout << inteiros[i] << " ";
        // }
        // cout << endl; 
        // cout << "--------------------------------" << endl; 


        // cout << "inteiros size: " << inteiros.size() << endl;
        // cout << "verificacoes.size : " << verificacoes.size() << endl; 

        if(verificacoes.size() != N + 1){
            cout << "N" << endl; 
            continue;
        } 

        bool var = true; 
        int contador = 0;  
        for(auto it = verificacoes.begin(); it != verificacoes.end(); it++){
            if(*it != contador){
                var = false; 
            } 
            contador++;
        }

        if(var == false){
            cout << "N" << endl; 
        } else {
            cout << "Y" << endl; 
        }
    }

    return 0;
}

// N -> Números da cartela basicamente
// N + 1 -> Quantidade de bolas numeradas  

/*
Sorteia um primeira bola, coloca-a de volta no globo, sorteia uma segunda bola, coloca-a de volta no globo, e então anuncia a diferença absoluta entre os números das duas bolas. 

*/
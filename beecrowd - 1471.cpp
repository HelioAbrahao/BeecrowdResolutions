#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    /*
        Cada mergulhador recebeu no início do mergulho uma pequena placa com um número de identificação. Ao terminar o mergulho, os voluntários devolviam a placa de identificação, colocando - a em um repositório. 
    */

   

    int numero_voluntarios_mergulhou, numero_voluntarios_retornou; 
    while(cin >> numero_voluntarios_mergulhou >> numero_voluntarios_retornou){ 

            vector<int>mergulhou;
            vector<int>voltaram;
            
            for(int j = 1; j <= numero_voluntarios_mergulhou; j++){
                mergulhou.push_back(j); 
            }  

            for(int j = 0; j < numero_voluntarios_retornou; j++){
                int temp;
                cin >> temp; 
                voltaram.push_back(temp); 
            }

            if(numero_voluntarios_mergulhou == numero_voluntarios_retornou) {
                cout << "*" << endl;
                continue; 
            }

            // cout << endl; 
            // cout << "----------------------------------------------------" << endl; 

            // for(int i = 0; i < numero_voluntarios_retornou; i++){
            //     cout << voltaram[i] << " "; 
            // }

            // cout << endl;

            // cout << "----------------------------------------------------" << endl; 

            int contador;  
            vector<int> nao_esta_em_ambos;
            for(int j = 0; j < numero_voluntarios_mergulhou; j++){
                contador = 0; 
                for(int k = 0; k < numero_voluntarios_retornou; k++){
                    if(mergulhou[j] == voltaram[k]){
                        contador++; 
                    } 
                }
                if(contador == 0){
                    nao_esta_em_ambos.push_back(mergulhou[j]);
                }
            }

            for(int j = 0; j < nao_esta_em_ambos.size(); j++){
                cout << nao_esta_em_ambos[j] << " "; 
            }
            cout << endl;
        // Lembrar que quando for haver a utilização de PUSH_BACK é estritamente proibido eu declarar o vector com tamanho fixo.
    }

    return 0;
}


// 1 2 3 4 5
// 1   3   5
//   2   4 



/*
1 2 3 4 5
3 1 5 
1 3 5 

*/
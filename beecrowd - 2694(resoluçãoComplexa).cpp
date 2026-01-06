#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        string entrada;
        cin >> entrada;

//      vector<string> vetor(quantidadeDeNumeros); // Quando eu inicializo um vector com uma quantidade de elementos pré-definida, eu inicio, nesse caso, quantidadeDeNumeros strings vazias. Isso causa um grave problema, pq eu utilizo push back na logica de inserção dos números. 
// Correto:

        vector<string> vetor; 

        string numero; 
        for(int j = 0; j < entrada.size(); j++){
            if(isdigit(entrada[j])){
                numero += entrada[j];
            } else {
                if(!numero.empty()){
                    vetor.push_back(numero);
                    numero.clear(); 
                }
            }
        }

        if(!numero.empty()){
            vetor.push_back(numero); 
        }

        int somatoria_resultado = 0;
        for(int j = 0; j < vetor.size(); j++){
            somatoria_resultado += stoi(vetor[j]);
        }

        cout << somatoria_resultado << endl;
    }

    return 0; 
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr); 

//     int number;
//     cin >> number;

//     for(int i = 0; i < number; i++){
//         string entrada;
//         cin >> entrada;


//         vector<string> vetor;
//         string numero; 
//         for(int i = 0; i < entrada.size(); i++){
//             if(isdigit(entrada[i])){
//                 numero += entrada[i]; 
//             } else {
//                 if(!numero.empty()){
//                     vetor.push_back(numero);
//                     numero.clear(); 
//                 }
//             }
//         }

//         if(!numero.empty()){
//             vetor.push_back(numero);
//         }

//         int somatoria_resultado = 0; 
//         for(int i = 0; i < vetor.size(); i++){
//             somatoria_resultado += stoi(vetor[i]); 
//         }

//         cout << somatoria_resultado << endl;
//     }

//     return 0; 
// }
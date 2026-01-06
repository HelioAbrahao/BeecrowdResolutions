// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main(){
//     int numero;
//     while(cin >> numero && numero != 0){
//         vector<int> entradas1;
//         vector<int> entradas2; 
//         for(int i = 0; i < numero; i++){
//             int elemento;
//             cin >> elemento;
//             entradas1.push_back(elemento);
//             entradas2.push_back(elemento);
//         }
//             sort(entradas1.begin(), entradas1.end());
//             entradas1.pop_back();
//             int variavel = entradas1.back(); 
//             for(int index = 0; index < entradas2.size(); index++){
//                 if(entradas2[index] == variavel){
//                     cout << index + 1<< endl;
//                 }
//             } 
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int numero;
    while(cin >> numero && numero != 0){
        vector<int> entradas(numero); 
        
        for(int i = 0; i < numero; i++){
            cin >> entradas[i]; 
        }

        int maior = -1e9, segundoMaior = -1e9; 
        for(int x : entradas){
            if(x > maior){
                segundoMaior = maior;
                maior = x; 
            } else if (x > segundoMaior && x < maior) {
                segundoMaior = x; 
            }
        }

        for(int i = 0; i < entradas.size(); i++){
            if(entradas[i] == segundoMaior){
                cout << i + 1 << endl; 
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int number;
    cin >> number; 
    cin.ignore(); 

    string alfabeto = "abcdefghijklmnopqrstuvwxyz"; 

    for(int i = 0; i < number; i++){
        int variavel_resposta = 0;

        string entrada;
        getline(cin, entrada); 
    
        // ab bd

        string temp1, temp2; 
        int contador = 0; 
        while(entrada[contador] != ' '){
            temp1 += entrada[contador]; 
            contador++; 
        }

        contador++; 
        while(contador < entrada.size()){
            temp2 += entrada[contador]; 
            contador++; 
        }

        // cout << temp1 << endl; 
        // cout << temp2 << endl; 

        int index1 = 0;
        int index2 = 0; 

        for(int k = 0; k < temp1.size(); k++){
            for(int j = 0; j < alfabeto.size(); j++){
                if(temp1[k] == alfabeto[j]){
                    index1 = j; 
                }

                if(temp2[k] == alfabeto[j]){
                    index2 = j; 
                }
            }
        variavel_resposta = variavel_resposta + (index2 - index1 + 26) % 26; 
        }

        cout << variavel_resposta << endl; 
    }

    return 0; 
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cin >> number;
    cin.ignore();

    string alfabeto = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < number; i++){
        string b;
        getline(cin, b);  
        
        string teste1, teste2;
        
        int contador = 0; 
        while(b[contador] != ' '){
            teste1 += b[contador];
            contador++;
        }

        contador++;

        while(contador < b.size()){
            teste2 += b[contador];
            contador++;
        }

        // cout << teste1 << endl;
        // cout << teste2 << endl; 

        int index1 = 0;
        int index2 = 0;
        int contador_mor = 0;  
    
        for(int k = 0; k < teste1.size(); k++){
            for(int j = 0; j < alfabeto.size(); j++){
                if(teste1[k] == alfabeto[j]){
                    index1 = j; 
                }

                if(teste2[k] == alfabeto[j]){
                    index2 = j; 
                }       
            }

            contador_mor += (index2 - index1 + 26) % 26;  
        }
        
        cout << contador_mor << endl; 
    }

    return 0;
}
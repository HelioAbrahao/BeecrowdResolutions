#include <iostream>
#include <map>
#include <limits>
using namespace std;

int main(){
    int number; 
    cin >> number;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // for(auto it = alfabeto.begin(); it != alfabeto.end(); it++){
    //     cout << it->first << "-" << it->second << endl; 
    // }
    
    for(int i = 0; i < number; i++){
        
        map <char, bool> alfabeto; 
        for(int j = 0; j < 26; j++){
            alfabeto['a' + j] = false;
        }

        string str;
        getline(cin, str); 
        for(int j = 0; j < str.size(); j++){
            if (str[j] >= 'a' && str[j] <= 'z') {
                alfabeto[str[j]] = true;
            }
        }

        int contador_letras = 0;
        for(auto it = alfabeto.begin(); it != alfabeto.end(); it++){
            if(it->second == 1){
                contador_letras++;
            }
        }

        // cout << "Valor contador_letras = " << contador_letras << endl;

        if(contador_letras == 26){
            cout << "frase completa" << endl;
        } else if (contador_letras <= 13){
            cout << "frase mal elaborada" << endl;
        } else {
            cout << "frase quase completa" << endl; 
        }
    }


    return 0; 
}
#include<iostream>
#include <map>
using namespace std;

int main(){
    map<char, int> alfabeto;
    int contador = 0;

    char caracter = 'A';
    for(int i = 0; i < 26; i++){
        alfabeto[caracter];
        caracter++; 
    }

    for(auto it = alfabeto.begin(); it != alfabeto.end(); it++){
        it->second = contador + 1;
        contador++;
    }

    char c;
    cin >> c;

    cout << alfabeto[c] << endl;

    return 0; 
}
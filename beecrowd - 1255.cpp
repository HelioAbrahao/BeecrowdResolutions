#include <iostream>
#include <map>
using namespace std;

int main(){
    int numero_repeticoes;
    cin >> numero_repeticoes;
    cin.ignore();

    for(int i = 0; i < numero_repeticoes; i++){
        int maior = 0;
        string str;
        getline(cin, str); 
        
        map <char, int> mapa;
        for(int i = 0; i < str.size(); i++){
            if(isupper(str[i]) || islower(str[i])){
                mapa[tolower(str[i])]++;
            }
        }

        for(auto it = mapa.begin(); it != mapa.end(); it++){
            if(maior < it->second){
                maior = it->second;
            }
        }

        for(auto it = mapa.begin(); it != mapa.end(); it++){
            if(it->second == maior){
                cout << it->first;
            }
        }
        cout << endl; 
    }

    return 0;
}
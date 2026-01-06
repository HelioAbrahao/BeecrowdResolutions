#include <bits/stdc++.h>
using namespace std;

int main(){
    int numero;
    cin >> numero;

    string maior;

    for(int i = 0; i < numero; i++){
        int bonus_aplicado; 
        cin >> bonus_aplicado; 

        long long Guarpe = 0;
        long long Dabriel = 0; 

        int ataque1, defesa1, level1;
        cin >> ataque1 >> defesa1 >> level1; 

        if(level1 % 2 == 0){
            Guarpe = (ataque1 + defesa1)/2 + bonus_aplicado;
        } else {
            Guarpe = (ataque1 + defesa1)/2;
        }
            
        int ataque2, defesa2, level2;
        cin >> ataque2 >> defesa2 >> level2; 

        if(level2 % 2  == 0){
            Dabriel = (ataque2 + defesa2)/2 + bonus_aplicado; 
        } else {
            Dabriel = (ataque2 + defesa2)/2; 
        }
            

        if(Guarpe > Dabriel){
            cout << "Dabriel" << endl;
        } else if(Dabriel > Guarpe){
            cout << "Guarte" << endl;
        } else {
            cout << "Empate" << endl;
        }
    }



    return 0; 
}
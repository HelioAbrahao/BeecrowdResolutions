#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int horas {}, minutos{}, minutos_totais{};
    string entrada;

    while(getline(cin, entrada)){
        stringstream ss(entrada);
        char separador;

        ss >> horas >> separador >> minutos; 

// --------------------------------------------------------------------------

        minutos  += horas * 60;
        minutos_totais = minutos + 60;
        
        if(minutos_totais <= 480){
            cout << "Atraso maximo: " << 0 << endl;
            continue;
        }

        minutos_totais = abs(480 - minutos_totais);
        cout << "Atraso maximo: " << minutos_totais << endl; 
    }

    return 0;
}

/*

Bino combina de se econtrar com Sino no terminal às 8 da manhã. Porém muitas vezes Bino se atrasa. 
Sabendo que Bino leva de 30 a 60 minutos para chegar ao terminal. Diga o atraso máximo de Bino. 

*/
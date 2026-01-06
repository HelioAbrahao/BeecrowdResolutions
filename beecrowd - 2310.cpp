#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    int number;
    cin >> number;

    double somatoria_saques = 0, somatoria_bloqueios = 0, somatoria_ataques = 0; 
    double somatoria_saques_corretos = 0, somatoria_bloqueios_corretos = 0, somatoria_ataques_corretos = 0; 
    
    for(int i = 0; i < number; i++){
        string name;
        cin >> name; 
        double saques, bloqueios, ataques, saques_corretos, bloqueios_corretos, ataques_corretos;
        cin >> saques >> bloqueios >> ataques;
        cin >> saques_corretos >> bloqueios_corretos >> ataques_corretos; 

        somatoria_saques += saques;
        somatoria_bloqueios += bloqueios; 
        somatoria_ataques += ataques; 

        somatoria_saques_corretos += saques_corretos;
        somatoria_bloqueios_corretos += bloqueios_corretos; 
        somatoria_ataques_corretos += ataques_corretos; 
    }
//21

    cout << "Pontos de Saque: " << fixed << setprecision(2) << (100 * somatoria_saques_corretos)/somatoria_saques << " %." << endl; 
    cout << "Pontos de Bloqueio: " << fixed << setprecision(2) << (100 * somatoria_bloqueios_corretos)/somatoria_bloqueios << " %." << endl; 
    cout << "Pontos de Ataque: " << fixed << setprecision(2) << (100 * somatoria_ataques_corretos)/somatoria_ataques << " %." << endl; 


    return 0; 
}

/*
- tentativas saques
- tentativas bloqueios
- tentativas ataques 

- tentativas saques sucesso
- tentativas bloqueios sucesso
- tentativas ataques sucesso 
-> Resultaram em pontos



PROGRAMA DEVE MOSTRAR QUAL A PORCENTAGEM DE SAQUES, BLOQUEIOS E ATAQUES DO TIME TODO TIVERAM SUCESSO
*/
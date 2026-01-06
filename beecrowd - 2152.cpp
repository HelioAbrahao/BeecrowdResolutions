#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        int hora, minuto;
        bool aberto_fechado;

        cin >> hora >> minuto;
        cin >> aberto_fechado; 

        if(hora < 10 && minuto < 10 && aberto_fechado == true){
            cout << "0" << hora << ":" << "0" << minuto << " - A porta abriu!" << endl;
        } else if(hora < 10 && minuto < 10 && aberto_fechado == false){
            cout << "0" << hora << ":" << "0" << minuto << " - A porta fechou!" << endl;
        } else if(hora < 10 && minuto >= 10 && aberto_fechado == true){
            cout << "0" << hora << ":" << minuto << " - A porta abriu!" << endl;
        } else if(hora < 10 && minuto >= 10 && aberto_fechado == false) {
            cout << "0" << hora << ":" << minuto << " - A porta fechou!" << endl;
        } else if(hora >= 10 && minuto < 10 && aberto_fechado == true){
            cout << hora << ":" << "0" << minuto << " - A porta abriu!" << endl; 
        } else if(hora >= 10 && minuto < 10 && aberto_fechado == false){
            cout << hora << ":" << "0" << minuto << " - A porta fechou!" << endl;
        } else if(hora >= 10 && minuto >= 10 && aberto_fechado == true){
            cout << hora << ":" << minuto << " - A porta abriu!" << endl; 
        } else if(hora >= 10 && minuto >= 10 && aberto_fechado == false){
            cout << hora << ":" << minuto << " - A porta fechou!" << endl; 
        } 
    }

    return 0;
}


/*
O sistema consiste em retirar uma vela do candelabro do lado da porta, que a mesma se abre, e, ao colocar a vela de volta ao candelabro, a porta se fecha. Porém, isso era uma desculpa, na verdade, o assistente do cientista, chamado Pepe, é que abria a porta do laboratório, por dentro.
    Depois o sistema começou a funcionar igualmente ao projeto inicial. 


    A cada registro, três números inteiros são cadastrados, sendo a hora e o minuto que o evento ocorreu e um valor que representa se a porta abriu ou fechou naquele momento. 
*/
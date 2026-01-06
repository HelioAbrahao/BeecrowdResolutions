#include <iostream>
using namespace std;

int main(){
        int numero_consultas_realizadas;
        
    while(cin >> numero_consultas_realizadas && numero_consultas_realizadas != 0){
        int coordenadaN_ponto_divisor, coordenadaM_ponto_divisor;
        cin >> coordenadaN_ponto_divisor >> coordenadaM_ponto_divisor; 

        for(int i = 0; i < numero_consultas_realizadas; i++){
            int cooX, cooY;
            cin >> cooX >> cooY; 

            if(cooX == coordenadaN_ponto_divisor || cooY == coordenadaM_ponto_divisor){
                cout << "divisa" << endl;
            } else if(cooX < coordenadaN_ponto_divisor && cooY < coordenadaM_ponto_divisor){
                cout << "SO" << endl;
            } else if(cooX < coordenadaN_ponto_divisor && cooY > coordenadaM_ponto_divisor){
                cout << "NO" << endl;
            } else if(cooX > coordenadaN_ponto_divisor && cooY > coordenadaM_ponto_divisor){
                cout << "NE" << endl;
            } else {
                cout << "SE" << endl;
            }
        }
    }

    return 0; 
}

/*
< <
< >
> >
> <
*/

/*

Noroeste(NO) Nordeste(NE)

Sudoeste(SO) Sudeste(SE) 

*/
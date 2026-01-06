#include <iostream>
using namespace std;
// Desde que cada disco não seja colocado acima de outro disco de menor tamanho.
// Configuracão inicial consiste de todos os discos no pino 1.
// O objetivo do quebra cabecas é mover todos os discos para um dos outros pinos, sempre obedecendo à restricão de não colocar um disco
// sobre outro menor.

void move_disco(int d, char ori, char dest, char aux){
    if(d == 1){
        cout << "Mover disco " << d << " de " << ori << " para " << dest << endl;
    }else{
        move_disco(d-1, ori, aux, dest);
        cout << "Mover disco " << d << " de " << ori << " para " << dest << endl;
        move_disco(d - 1, aux, dest, ori);
    }
}

int main(){

    int discos;
    cin >> discos;

    move_disco(discos, 'A', 'C', 'B');

 
    return 0;
}
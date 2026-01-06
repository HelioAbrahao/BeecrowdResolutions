/*
O que é preciso fazer, basicamente? 
Preciso fazer uma classe humano e a partir dessa classe
, por meio de métodos get e set, alterar a idade desse
humano.
*/
#include <iostream>
using namespace std;

class humano{
    int idade;
public: 
    humano(){
        idade = 0;
    }
    int get_idade(){
        return idade;
    }
    void set_idade(int valor){
        if(valor >= 0 && valor <= 200){
            idade = valor;
        }
    }
};

int main(){
    humano helio;
    
    cout << helio.get_idade() << endl;
    helio.set_idade(20);
    cout << helio.get_idade() << endl;
    helio.set_idade(-20);                  // não alterará o valor de idade, uma vez que -20 não está
// no intervalo entre 0 e 200.
    cout << helio.get_idade() << endl;

    return 0;
}

// Saídas : 0 20 20
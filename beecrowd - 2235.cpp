#include <iostream>
using namespace std;

int main(){
    int number1, number2, number3; 
    cin >> number1 >> number2 >> number3; 

    if(number1 - number2 == 0){
        cout << "S" << endl; 
    } else if(number1 - number3 == 0){
        cout << "S" << endl;
    } else if(number2 - number3 == 0){
        cout << "S" << endl; 
    } else if(number1 - number2 - number3 == 0){
        cout << "S" << endl; 
    } else if(number1 - number2 + number3 == 0){
        cout << "S" << endl; 
    } else if(number1 + number2 - number3 == 0){
        cout << "S" << endl; 
    } else if(number1 + number2 + number3 == 0){
        cout << "S" << endl; 
    } else {
        cout << "N" << endl; 
    }
    
    return 0; 
}

/*
- Cada uso da máquina você decide voltar para o passado ou ir para o futuro.
- A máquina possui 3 créditos fixos, cada crédito representa uma certa quantidade de anos, e pode ser usado para ir essa quantidade de anos para o passado ou para o futuro. 

- PELO MENOR UMA VIAGEM E NO MÁXIMO TRES VIAGENS. 

number1 - number2 == 0
number1 - number3 == 0
number2 - number3 == 0
number1 - number2 - number3 == 0
number1 - number2 + number3 == 0
number1 + number2 - number3 == 0
number1 + number2 + number3 == 0 

*/
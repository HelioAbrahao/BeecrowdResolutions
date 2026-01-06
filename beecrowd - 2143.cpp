#include <iostream>
#include <vector>
using namespace std;

int main(){
    int number = 0; 
    while(cin >> number && number != 0){
        int value = 0; 
        for(int i = 0; i < number; i++){
            cin >> value;
            if(value % 2 == 0){
                cout << ((value - 2) * 2) + 2 << endl;
            } else {
                cout << ((value - 1) * 2) + 1 << endl; 
            }
        }
    }

    return 0; 
}

/*
Número par -> 2 pessoas nas pontas pedem apenas uma vez e todos os outros pedem 2 vezes. Logo preciso subtrair 2 do value e somar com o dobro do resto. 
Número ímpar -> 1 pessoa em uma das pontas pede apenas uma vez e todos os outros pedem 2 vezes. Logo preciso subtrair 
*/
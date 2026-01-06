#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        long long var, contador = 0, somatoria = 1;
        cin >> var;
        
        for(int j = 0; j < var; j++){
            contador += somatoria;
            somatoria = somatoria * 2; 
        }
    
    long long peso = contador/12000; 

    cout << peso << " kg" << endl; 
    }

/*
12 grãos equivalem a 1 grama
1000 gramas equivalem a 1 kg
12000 graos equivalem a 1 kg
*/

/*
primeiro quadrado apenas um grão
quadrados subsequentes o dobro do quadrado anterior
*/

    return 0;
}
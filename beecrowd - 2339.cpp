#include <iostream>
using namespace std;

int main(){ 
    /*
    c -> numero de competidores
    p -> quantidade de folhas 
    f -> quantidade de folha especial que cada competidor deve receber
    */

    int c, p, f;
    cin >> c >> p >> f;

    int quantidade_necessaria_folhas = c * f; 

    if(quantidade_necessaria_folhas > p){
        cout << "N" << endl;
    } else {
        cout << "S" << endl; 
    }

    return 0; 
}
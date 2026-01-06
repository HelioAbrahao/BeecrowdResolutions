#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number; 

    for(int i = 0; i < number; i++){
        int contador = 0; 
        float number2; 
        
        cin >> number2;

        while(number2 > 1){
            number2 = number2/2; 
            contador++;
        } 

        cout << contador << " dias" << endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    // Há uma altura mínima e uma altura máxima que as pessoas devem ter para poder passear na montanha-russa. 
    int visitantes, altura_minima, altura_maxima; 
    cin >> visitantes >> altura_minima >> altura_maxima; 

    int contador = 0;
    for(int i = 0; i < visitantes; i++){
        int value;
        cin >> value; 
        if(value >= altura_minima && value <= altura_maxima){
            contador++; 
        }
    }

    cout << contador << endl;

    return 0; 
}

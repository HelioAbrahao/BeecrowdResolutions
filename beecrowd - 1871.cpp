#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b && a != 0 && b != 0){
        int soma = a + b; 
        string numero = to_string(soma);
        
        string numero2;
        for(int i = 0; i < numero.size(); i++){
            if(numero[i] != '0'){
                numero2 = numero2 + numero[i];
            }
        }

        cout << numero2 << endl;
    }

    return 0; 
}
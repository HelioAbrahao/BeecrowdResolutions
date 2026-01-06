#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number; 

    for(int i = 0; i < number; i++){
        
        int in;
        cin >> in; 

        int soma = 0;
        for(int i = 1; i <= in/2; i++){
            if(in % i == 0){
                soma += i; 
            }
        }
        
        if(soma == in){
            cout << in << " eh perfeito" << endl; 
        } else {
            cout << in << " nao eh perfeito" << endl; 
        }
    }

    return 0; 
}
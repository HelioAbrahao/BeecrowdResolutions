#include <iostream>
using namespace std;

int chamadas = 0; 

int fib(int number){
    if(number <= 1){
        chamadas++; 
        return number;
    } else {
        chamadas++;
        return fib(number - 1) + fib(number - 2); 
    }
}



int main(){
    int number;
    cin >> number; 
    for(int i = 0; i < number; i++){
        chamadas = 0; 
        int value;
        cin >> value; 

        int valor_recursao = fib(value);

        cout << "fib(" << value << ") = " << chamadas - 1 << " calls = " << valor_recursao << endl; 
    }

    return 0; 
}
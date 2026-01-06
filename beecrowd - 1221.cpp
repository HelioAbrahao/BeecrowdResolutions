#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int value){
    if(value <= 1) return false;
    if(value == 2) return true; 
    if(value % 2 == 0) return false; 

    for(int i = 3; i < sqrt(value); i += 2){
        if(value % i == 0){
            return false; 
        }
    }
    return true; 
}

int main(){
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        int number2;
        cin >> number2;

        if(isPrime(number2) == true){
            cout << "Prime" << endl;
        } else {
            cout << "Not Prime" << endl; 
        }
    }

    return 0;
}
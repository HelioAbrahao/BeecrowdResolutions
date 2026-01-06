#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number){
    if(number <= 1) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;

    for(int i = 3 ; i <= sqrt(number); i += 2){
        if(number % i == 0){
            return false; 
        }
    }

    return true; 
}

int main(){
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        int var; 
        cin >> var; 
        if(isPrime(var) == true){
            cout << var << " eh primo" << endl;
        } else {
            cout << var << " nao eh primo" << endl;
        }
    }

    return 0; 
}
// A saída precisa ser todos os números primos até 100.

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num <= 1) return false;
    if(num == 2) return true;
    if(num % 2 == 0) return false;
    //Atencão nesse loop for!
    for(int i = 3; i < num; i+=2){
        if(num % i == 0) return false;
    }
// Atencão à necesidade do return true!
    return true;
}

int main(){
    int num = 100;

    for(int i = 0; i <= num; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
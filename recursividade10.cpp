#include <bits/stdc++.h>
using namespace std;

// Funcão recursiva -> Fatorial
int factorial(int num){
    if(num == 1) return 1;
    return num * factorial(num - 1);
}


int main(){
    int number;
    cin >> number;

    cout << factorial(number) << endl;

    return 0;
}
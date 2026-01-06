#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double fib(double n){
    double resultado = (pow((1 + sqrt(5))/2, n) - pow((1 - sqrt(5))/2, n))/sqrt(5); 
    return resultado; 
}

int main(){
    double n;
    cin >> n;

    cout << fixed << setprecision(1) << fib(n) << endl;

    return 0;
}
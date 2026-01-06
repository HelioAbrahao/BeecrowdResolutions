#include <iostream>
#include <cmath>
using namespace std;

string maiorResultado(int number1, int number2){
    int a, b, c;
    a = pow((3 * number1), 2) + pow(number2, 2);
    b = 2 * (pow(number1, 2)) + pow((5 * number2), 2); 
    c = - (100 * number1) + pow(number2, 3);
    
    if(a > b && a > c){
        return "Rafael ganhou";
    } else if (b > a && b > c){
        return "Beto ganhou";
    } else {
        return "Carlos ganhou";
    }
}

int main(){
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        int num1, num2;
        cin >> num1 >> num2; 

        cout << maiorResultado(num1, num2) << endl; 
    }

    return 0;
}
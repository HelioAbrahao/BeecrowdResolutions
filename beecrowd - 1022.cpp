// #include<iostream>
// #include<string>
// #include<vector>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r; 
    }
    
    return a; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int number;
    cin >> number;
    cin.ignore();

    for(int i = 0; i < number; i++){
        int n1, d1, n2, d2; 
        char barra1, barra2, operacao; 

        cin >> n1 >> barra1 >> d1 >> operacao >> n2 >> barra2 >> d2; 
        cin.ignore(); 

        int numerador, denominador; 

        if(operacao == '+'){
            numerador = ((n1 * d2) + (n2 * d1));
            denominador = (d1 * d2);  
        } else if(operacao == '-'){
            numerador = ((n1 * d2) - (n2 * d1));
            denominador = (d1 * d2);
        } else if(operacao == '*'){
            numerador = (n1 * n2);
            denominador = (d1 * d2);
        } else if(operacao == '/'){
            numerador = ((n1 * d2));
            denominador = (d1 * n2);
        }

        int maximo_divisor = mdc(numerador, denominador);
        
        cout << numerador << "/" << denominador << " = " << numerador/maximo_divisor << "/" << denominador/maximo_divisor << endl; 
    } 

    return 0;
}


//   1 / 2 + 3 / 4
//   0123456789
//            10
//             11
//              12
//               13
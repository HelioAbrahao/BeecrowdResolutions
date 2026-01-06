/*
Esse programa basicamente tem como saída todas as potências de 2. Isso acontece basicamente, por meio da funcão
pow. A funcão pow recebe dois parâmetros(x,y) e retorna x^y.
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    for(double x = 0; x < 11; x++){
        cout << pow(2,x) << endl;
    }

return 0;
}
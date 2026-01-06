#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, r1, r2, r3;
    cin >> n1 >> n2 >> n3 >> r1 >> r2 >> r3;
    
    int contador = 0;
    
    if(r1 > n1){
        contador += r1 - n1; 
    }

    if(r2 > n2){
        contador += r2 - n2; 
    }

    if(r3 > n3){
        contador += r3 - n3;
    }

    cout << contador << endl; 

    return 0; 
}
#include <iostream>
using namespace std;

//Envolvendo a problemática da torre de hanoi, como seria possível descobrir a quantidade de movimentos necessária para resolve-la
// sem a utilizacão da fórmula pronta e também por meio da utilizacão de funcão recursiva.
// Há a necessidade de pensar por meio do raciocinio matemático do problema.

int torreHanoi(int n){ // n é equivalente à quantide de discos
    if(n == 1){
        return 1;
    }    
    return 2 * torreHanoi(n - 1) + 1;
}

int main(){
    int n;
    int q = 1;
    
    while(cin >> n && n != 0){
        cout << "Teste " << q << endl;
        cout << torreHanoi(n) << endl << endl;
        q++;
    }
return 0;

}
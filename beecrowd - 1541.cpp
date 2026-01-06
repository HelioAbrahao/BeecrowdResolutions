#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c;

    //a, b -> medidas da casa
    // c -> percentual maximo liberado para construir nesse bairo

    while(cin >> a >> b >> c && a != 0){

        int l = sqrt((a * b * 100)/c);
        cout << l << endl; 
    }

    return 0; 
}
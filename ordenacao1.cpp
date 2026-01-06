#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numeros[3];
    for(int i = 0; i < 3; i++){
        cin >> numeros[i];
    }
    sort(numeros, numeros+3);

    for(int i = 0; i < 3; i++){
        cout << numeros[i] << endl;
    }
    return 0;
}
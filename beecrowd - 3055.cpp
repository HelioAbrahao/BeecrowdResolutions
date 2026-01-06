#include <iostream>
using namespace std;

int main(){ 
    int nota_primeira_prova, media, nota_segunda_prova;

    cin >> nota_primeira_prova >> media;
    
    nota_segunda_prova = 2 * media - nota_primeira_prova; 
    cout << nota_segunda_prova << endl;

    return 0; 
}
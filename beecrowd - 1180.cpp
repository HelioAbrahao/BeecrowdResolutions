#include <iostream>
using namespace std;

int main(){
    int N, menor, indice;
    cin >> N;
    int X[N];

    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    menor = X[0];
    indice = 0; 

    for(int i = 1; i < N; i++){
        if(X[i] < menor){
            menor = X[i];
            indice = i;
        }
    }
    
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << indice << endl;
    
    return 0;
}

/*
for(int i = 0; i < N - 1; i++){
    if(x[i] < x[i + 1]){
        menor = x[i];
        indice = i;
    }
}


*/
#include <iostream>
using namespace std;

int main(){
    int vetor[10];

    for(int i = 0; i < 10; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            cout << vetor[i] << " ";
        }
    }

    cout << endl;

    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 != 0){
            cout << vetor[i] << " ";
        }
    }
    
    return 0;
}
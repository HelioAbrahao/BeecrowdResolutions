#include <iostream>
using namespace std;

int main(){
    int T, vetor[1005];
    cin >> T;

    for(int i = 0; i < 1000; i++){
        vetor[i] = i % T;
        cout << "N[" << i << "] = " << vetor[i] << endl; 
    }
    return 0;
}
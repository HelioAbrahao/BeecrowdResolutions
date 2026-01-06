#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
- Se houver empate entre um número ímpar e um número par então o número impar ira preceder o número par. 

- Se houver empate entre dois numeros impares (empate de modulo), entao o maior numero impar irá preceder o menor numero impar.

- Se houver um empate entre dois numeros pares (modulo mesmo valor), entao o menor numero par ir precederr o maior numero par.  

*/

long long M;

bool cmp(long long a, long long b){
    long long modA = a % M;
    long long modB = b % M;
    
    if(modA != modB){
        return modA < modB; 
    }

    // Se for falso é IMPAR, se for true é PAR. 
    bool paridadeA = (a % 2 == 0); 
    bool paridadeB = (b % 2 == 0);

    if(paridadeA != paridadeB){ // Um é impar e um é par 
        return !paridadeA; 
    }

    if(paridadeA && paridadeB){
        return a < b; 
    }

    if(!paridadeA && !paridadeB){
        return b < a;
    }

    return false; 
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    long long N;
    while(cin >> N >> M && N != 0 && M != 0){
        vector<long long>temp; 
        for(long long i = 0; i < N; i++){
            long long number = 0;
            cin >> number;
            temp.push_back(number);  
        }

        sort(temp.begin(), temp.end(), cmp);

        cout << N << " " << M << endl;
        for(long long i = 0; i < temp.size(); i++){
            cout << temp[i] << endl;
        }
    }

    cout << 0 << " " << 0 << endl;
    
    return 0;
}
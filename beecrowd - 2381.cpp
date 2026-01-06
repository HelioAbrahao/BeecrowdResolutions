#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K; 

    vector<string> alunos;
    for(int i = 0; i < N; i++){
        string nome;
        cin >> nome;  

        alunos.push_back(nome); 
    }

    sort(alunos.begin(), alunos.end()); 

    cout << alunos[K - 1] << endl;

    return 0; 
}
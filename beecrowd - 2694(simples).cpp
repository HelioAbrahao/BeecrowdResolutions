#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        string texto;
        cin >> texto;

        string vetor[3]; 

        vetor[0] += texto[2];
        vetor[0] += texto[3]; 
        vetor[1] += texto[5];
        vetor[1] += texto[6];
        vetor[1] += texto[7];
        vetor[2] += texto[11];
        vetor[2] += texto[12];

        int somatoria_resposta = 0;
        for(int i = 0; i < 3; i++){
            somatoria_resposta += stoi(vetor[i]);
        }

        cout << somatoria_resposta << endl;
    }



    return 0; 
}

O(n^2)
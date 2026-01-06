#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int mudas;
    cin >> mudas; 

    vector<int>dias_que_demora_crescer(mudas); 
    for(int i = 0; i < mudas; i++){
        cin >> dias_que_demora_crescer[i]; 
    }

    sort(dias_que_demora_crescer.begin(), dias_que_demora_crescer.end(), greater<int>()); 

    int maior_valor = 0;

    for(int i = 0; i < mudas; i++){
        if(maior_valor < (dias_que_demora_crescer[i] + (i + 1))){
            maior_valor = (dias_que_demora_crescer[i] + (i + 1));
        }
    }

    cout << maior_valor + 1 << endl; 

    return 0;
}

// max(i+1 + T[i]) + 1.
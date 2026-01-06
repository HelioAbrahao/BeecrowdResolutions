#include <bits/stdc++.h>
using namespace std;

struct camiseta{
    string nome;
    string cor; 
    char tamanho; 
};

bool cmp(const camiseta &a, const camiseta &b){
    if(a.cor != b.cor){
        return a.cor < b.cor;
    }

    if(a.tamanho != b.tamanho){
        if(a.tamanho == 'G') return true;
        if(a.tamanho == 'M' && b.tamanho == 'P') return true;
        return false; 
    }

    return a.nome < b.nome; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n;
    bool firstCase = true; 

    while(cin >> n && n != 0){
        vector<camiseta> camisetas(n);
        cin.ignore();
        
        for(int i = 0; i < n; i++){
            getline(cin, camisetas[i].nome); 
            cin >> camisetas[i].cor >> camisetas[i].tamanho; 
            cin.ignore();
        }

        sort(camisetas.begin(), camisetas.end(), cmp);

        if(!firstCase){
            cout << endl;  
        } 
        firstCase = false; 

        for(int i = 0; i < camisetas.size(); i++){
            cout << camisetas[i].cor << " " << camisetas[i].tamanho << " " << camisetas[i].nome << endl; 
        }
    }

    return 0;
}
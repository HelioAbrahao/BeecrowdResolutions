#include <bits/stdc++.h>
using namespace std;

struct aluno{
    string nome;
    double media;
};

int func(aluno a, aluno b){
    return a.media > b.media; // Vai ordenar do maior para o menor (ordem decrescente).
    }

int main(){
    aluno v[5];
    for(int i = 0; i < 5; i++){
        cin >> v[i].nome >> v[i].media;
    }

    sort(v, v + 5, func);
    for(int i = 0; i < 5; i++){
        cout << v[i].nome << " " << v[i].media << endl;
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

struct aluno{
    string nome;
    double nota;
};

int func(aluno a, aluno b){
    return a.media > b.media;
}

int main(){
    aluno v[5];
    /*
    v[0] = nome x0;
           media y0;
    
    v[1] = nome x1;
           media y1;
    
    v[2] = nome x2;
           media y2;
    
    v[3] = nome x3;
           media y3;
    
    v[4] = nome x4;
           media y4;
    
    */

    for(int i = 0; i < 5; i++){
        cin >> v[i].nome >> v[i].media;
   }
    
    sort(v, v + 5, func);
    for(int i = 0; i < 5; i++){
        cout << v[i].nome << " " << v[i].media << endl;
    }



    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 


    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        vector<int> alunos;
        int quantidade_alunos = 0, numero_secreto = 0; 
        cin >> quantidade_alunos >> numero_secreto; 

        for(int j = 0; j < quantidade_alunos; j++){
            int chute_aluno = 0;
            cin >> chute_aluno;
            alunos.push_back(chute_aluno);
        } 

        for(int j = 0; j < quantidade_alunos; j++){
            if(alunos[j] == numero_secreto){
                cout << j + 1 << endl; 
                break;
            }
        }
 
        int distancia = 0;
        int menor_distancia = INFINITY; 
        for(int j = 0; j < quantidade_alunos; j++){
            if(alunos[j] < numero_secreto){
                distancia = numero_secreto - alunos[j];
            } else {
                distancia = alunos[j] - numero_secreto; 
            }

            if(distancia < menor_distancia){
                menor_distancia = distancia; 
            }
        }

        // cout << "-------------------------------------------" << endl; 
        // cout << menor_distancia << endl; 

        // ---------------------------------------------------------


        for(int j = 0; j < quantidade_alunos; j++){
            if(alunos[j] < numero_secreto && numero_secreto - alunos[j] == menor_distancia){
                cout << j + 1 << endl;
                break; 
            } else if(alunos[j] > numero_secreto && alunos[j] - numero_secreto == menor_distancia){
                cout << j + 1 << endl;  
                break;
            }
        }
    }

    return 0; 
}

/*
O primeiro de cada grupo a acertar um número escolhido pelo professor obviamente ganha a camiseta, mas se ninguem acertar este número, ganha a camiseta o primeiro que chegar o mais próximo deste número; 

*/
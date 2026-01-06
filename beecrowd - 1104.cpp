// Começando a resolução de uma questão envolvendo ad-hoc e interseção de conjuntos
// Problema número beecrowd - 1104

// O que é a interseção de dois conjuntos? Basicamente aquele conjunto formado pelos elementos que estão tanto no conjunto1, quanto no conjunto2. 


#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Cada arta possui um identificar único, que é, nesse caso, um número inteiro. Desse modo, podemos armazenar as cartas em um container do tipo set, visando evitar repetições de cartas e conseguindo a informação de quais são as cartas, as quais, ambas as meninas possuem. 

    // Cada uma das duas meninas possui um conjunto de cartas e trocam cartas entre si. Elas não trocam cartas idênticas (por exemplo, uma da a carta de número 5 e a outra devolve também a carta de número 5) e não recebem cartas repetidas na troca (digamos que a primeira menina tenha a carta número 3; a partir disso concluimos que a segunda menina não pode dar na troca essa carta de número 3, uma vez que a primeira menina já a possui). 


    // As cartas serão trocadas em uma única operação de troca. Alice dá para Beatriz um sub-conjunto com N cartas distintas e recebe de volta um outro sub-conjunto com N cartas distintas.
    // Escreva um programa que dados os conjuntos, determine o número máximo de cartas que podem ser trocadas. 


    set<int>alice;
    set<int>beatriz;

    int number_alice, number_beatriz;
    while((cin >> number_alice >> number_beatriz) && number_alice != 0 && number_beatriz != 0){
        alice.clear();
        beatriz.clear(); 

        for(int i = 0; i < number_alice; i++){
            int value;
            cin >> value;
            alice.insert(value); 
        }

        for(int i = 0; i < number_beatriz; i++){
            int value;
            cin >> value; 
            beatriz.insert(value); 
        }

        vector<int>alice_vector(alice.begin(), alice.end());
        vector<int>beatriz_vector(beatriz.begin(), beatriz.end());
        

        // Testando se os sets(conjuntos) foram preenchidos de maneira correta: 

        // cout << "------------------------------------------------------------------" << endl; 

        // for(auto it = alice.begin(); it != alice.end(); it++){
        //     cout << *it << endl; 
        // }

        // cout << "-------------------------------------------------------------------" << endl; 

        // for(auto it = beatriz.begin(); it != beatriz.end(); it++){
        //     cout << *it << endl; 
        // }

        // cout << "-------------------------------------------------------------------" << endl; 

        int contador = 0;
        for(int i = 0; i < alice_vector.size(); i++){
            for(int j = 0; j < beatriz_vector.size(); j++){
                if(alice_vector[i] == beatriz_vector[j]){
                    contador++; 
                }
            }
        }

        if(alice.size() < beatriz.size()){
            cout << alice.size() - contador << endl;
        } else {
            cout << beatriz.size() - contador << endl; 
        }
    } 

    return 0; 
}


// 1, 1, 2, 3, 5, 7, 8, 8, 9, 15
// 2, 2, 2, 3, 4, 6, 10, 11, 11
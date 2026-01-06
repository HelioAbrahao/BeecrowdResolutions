/*
    Dada uma lista de alunos que serão escolhidos e seus respectivos níveis de habilidade para os times e a quantidade de times
que serão formados, mostre como ficarão os times ao final do processo de montagem dos mesmos.

*/

#include <bits/stdc++.h> 
using namespace std; 

vector < vector <string> > team;  
priority_queue < pair <int, string> > players;  // Criacao de uma fila de pares. Lembrando que um par é basicamente dois valores em
// uma mesma variável.
int n, t;  

int main() {
    cin >> n >> t;  

    for(int i = 0; i < t; i++){ 
        team.push_back(vector<string>()); // Inicializa o vetor team com t times vazios  
    }

    for(int i = 0; i < n; i++) {
        string name;
        int h;
        cin >> name >> h;  
        players.push(make_pair(h, name));  
    }

    // Distribuicão dos Jogadores nos Times 
    int curTeam = 0; 
    while(players.size() > 0) {  
        team[curTeam].push_back(players.top().second);  
        players.pop();  
        curTeam = (curTeam + 1) % t; // ESSA LINHA É BASICAMENTE A COISA MAIS DIFÍCIL DE SE ESCREVER NA MINHA OPINIÃO. 
    }

    // Próximo loop for é basicamente o responsável por organizar a saída da maneira como é pedido.
    for(int i = 0; i < t; i++) {
        sort(team[i].begin(), team[i].end());  

        cout << "Time " << i + 1 << "\n"; 
        for(int j = 0; j < team[i].size(); j++) {
            cout << team[i][j] << "\n";   
        }
        cout << "\n";  
    }

    return 0;  
}

/*
Sim, quando você insere elementos do tipo pair<int, string> dentro de uma priority_queue em C++ sem fornecer um comparador 
personalizado, o elemento do topo será o par cujo primeiro elemento (int h) possui o maior valor. Isso ocorre porque a 
priority_queue por padrão usa um max-heap e compara os pares usando a ordenação lexicográfica, onde a comparação é feita 
primeiro pelo primeiro elemento do par.
*/
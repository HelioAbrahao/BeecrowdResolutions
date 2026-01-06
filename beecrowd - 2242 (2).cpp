/*
Vogais -> A,E,I,O,U
Consoantes -> Todas as outras
As consoantes não interferem no quanto as risadas digitais influenciam na transmissão do sentimento. A segunda coisa que 
ela percebeu é que as risadas digitais mais engraçadas são aquelas em que as sequências de vogais são iguais quando lidas 
na ordem natural (da esquerda para a direita) ou na ordem inversa (da direita para a esquerda), ignorando as consoantes. 

- Nível de abstracão desse problema é gigantesco. Pois, é difícil entender o que é uma risada engracada ou não.
  -> Pouco palpável.
*/
#include <iostream>
using namespace std;
// Se tem ou não consoante, não importa. É como se não tivesse aquela letra.
int main(){
    string risada, risadaSemConsoante, inversa;
    cin >> risada;
    bool a = true;

    for(int i = 0; i < risada.size(); i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            risadaSemConsoante += risada[i];
        }
    }
    
    inversa = risadaSemConsoante;
    char aux; // Mudança do tipo de dado de int para char
    int q = inversa.size() - 1;
    for(int i = 0; i < inversa.size() / 2; i++){ // Corrigindo a iteração para evitar inversão duplicada
        aux = inversa[i];
        inversa[i] = inversa[q];
        inversa[q] = aux;
        q--;
    }
    /*
    inversa = risadaSemConsoante;
    int q = inversa.size() - 1;
    for(int i = 0; i < risadaSemConsoante.size(); i++) {
        inversa[q] = risadaSemConsoante[i];
        q--;
    }
    */

    for(int i = 0; i < risadaSemConsoante.size(); i++){
        if(risadaSemConsoante[i] != inversa[i]){
            a = false;
            break;
        }
    }

    if(a){
        cout << "S\n";
    }else{
        cout << "N\n";
    }

    return 0;
}
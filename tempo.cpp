#include <tempo.h>
#include <iostream>
using namespace std;

Tempo::Tempo(){
    hora = 0;
    minuto = 0;
    segundo = 0;
}

Tempo::Tempo(int hh, int mm, int ss){ // Esse Tempo:: é obrigatório! Ele é o identificador de escopo.
    setTempo(hh, mm, ss);
}

void Tempo::setTempo(int hh, int mm, int ss){
    hora = hh;
    minuto = mm;
    segundo = ss;
}

void Tempo::imprime(){
    cout << "{" << hh << ":" << mm << ":" << ss << "}";
}

/* - Uma classe é um tipo definido pelo usuário;
   - Uma classe consiste em um conjunto de membros;
        . Membros de dados(variáveis) e funcões membro(comportamentos).
   - Possuem contrutores, responsáveis pela sua inicializacão, e destrutores, responsáveis pela sua
finalizacão e limpeza;
   - Membros, tanto de dados quanto funcoes, são acessados através da utilizacão do .(ponto) para 
objetos e -> (seta) para ponteiros, de maneira semelhante às structs.
   - Os membros públicos de uma classe (public) proveem sua interface, enquanto os membros privados
guardam detalhes de implementacão(private).
   - Uma struct é como uma classe onde todos os membros são públicos. Utilize-as quando modelar um 
tipo que contenha apenas dados.
   
   
   - Um objeto é uma instância da classe (variável)
   

*/
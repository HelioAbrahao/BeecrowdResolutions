#ifndef TEMPO_H
#define TEMPO_H

//arquivo de cabecalho (header)
class Tempo { // O nome da classe, seu identificador, vai ser o nome do seu tipo
    // membros privados 
    private: 
        int hora, minuto, segundo; // Membros de dados
    
    public:
        Tempo(); // construtor - inicializar os membros de dados
        Tempo(int,int,int);
        void setTempo(int, int, int);
        void imprime();
        ~Tempo(); // destruindo
};

#
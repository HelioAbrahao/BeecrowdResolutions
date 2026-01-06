#include <iostream>
using namespace std;

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;

    int inicio = hora_inicial * 60 + minuto_inicial;
    int fim = hora_final * 60 + minuto_final;

    int duracao = fim - inicio;
    if (duracao <= 0) {
        duracao += 24 * 60; // passou da meia-noite
    }

    int horas_restantes = duracao / 60;
    int minutos_restantes = duracao % 60;

    cout << "O JOGO DUROU " << horas_restantes << " HORA(S) E " 
         << minutos_restantes << " MINUTO(S)" << endl;

    return 0;
}

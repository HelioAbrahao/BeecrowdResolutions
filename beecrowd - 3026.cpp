#include <bits/stdc++.h>
using namespace std;

int main(){
    /* 
    Um jogo de dominó possui 28 pecas. Cada peca está dividida em 
dois quadrados e dentro de cada quadrado há entre 0 e 6 círculos.
    */
   int n, pecas; 
   cin >> n;

   pecas = ((n + 1) * (n + 2))/2;

   cout << pecas << endl;

return 0;
}
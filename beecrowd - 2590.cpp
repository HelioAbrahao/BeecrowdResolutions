// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr); 

//     int number; 
//     cin >> number;

//     for(int i = 0; i < number; i++){
//         long long expoente; 
//         cin >> expoente; 

//         if(expoente == 0){
//             cout << 1 << endl;
//             continue; 
//         }

//         long long resto = expoente % 4; 
//         if(resto == 1){
//             cout << 7 << endl;
//         } else if (resto == 2){
//             cout << 9 << endl; 
//         } else if (resto == 3){
//             cout << 3 << endl; 
//         } else {
//             cout << 1 << endl; 
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin >> number;

    int ciclo[4] = {1, 7, 9, 3}; 
    string resposta;
    resposta.reserve(number * 2); // reserva espaço suficiente

    for (int i = 0; i < number; i++) {
        long long expoente;
        cin >> expoente;
        resposta += to_string(ciclo[expoente % 4]) + '\n';
    }

    cout << resposta;
    return 0;
}

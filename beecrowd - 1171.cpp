#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<int> valores(N);

    for (int i = 0; i < N; i++) {
        cin >> valores[i];
    }

    sort(valores.begin(), valores.end()); // Ordenamos os valores

    int atual = valores[0], cont = 1;
    for (int i = 1; i < N; i++) {
        if (valores[i] == atual) {
            cont++;
        } else {
            cout << atual << " aparece " << cont << " vez(es)\n";
            atual = valores[i];
            cont = 1;
        }
    }
    cout << atual << " aparece " << cont << " vez(es)\n";

    return 0;
}

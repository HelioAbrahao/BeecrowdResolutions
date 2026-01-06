#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double matriz[12][12];
    double soma = 0.0;
    char O;
    cin >> O;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j <= 10 - i; j++) { // <= é essencial
            soma += matriz[i][j];
        }
    }

    cout << fixed << setprecision(1);

    if (O == 'S')
        cout << soma << endl;
    else
        cout << soma / 30.0 << endl;

    return 0;
}

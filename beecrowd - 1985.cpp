#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    map <int, double> produtos = {{1001, 1.50}, {1002, 2.50}, {1003, 3.50}, {1004, 4.50}, {1005, 5.50}};

    double total = 0.0;
    int numero_produtos = 0;

    cin >> numero_produtos; 

    for(int i = 0; i < numero_produtos; i++){
        int codigo = 0, quantidade = 0;
        cin >> codigo >> quantidade; 
        total += produtos[codigo] * quantidade; 
    }

    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    double S = 0;
    for(int i = 1; i <= 100; i++){
        S += (1/(double)i); // Atenção, a divisão entre dois inteiros irá também resultar em um inteiro e a parte decimal será "jogada fora". Por isso devemos, ou fazer casting, ou colocar 1.0
    }

    cout << fixed << setprecision(2) << S << endl;

    return 0;
}
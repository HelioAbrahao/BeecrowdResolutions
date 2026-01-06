#include <bits/stdc++.h>
using namespace std;
#define MAX 1010
int matriz[MAX][MAX];
int l[MAX], c[MAX];

using namespace std;

int main(){
    int n, maxi = -10000000;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matriz[i][j];
            l[i] += matriz[i][j];
            c[j] += matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            maxi = max(maxi, l[i] + c[j] - 2 * matriz[i][j]); // Aqui multiplicamos por dois, pois o valor do elemento foi contado
// uma vez na linha e uma vez na coluna. Esse é o motivo! Excelente raciocínio. 
        }
    }
    cout << maxi << endl;
    return 0;
}
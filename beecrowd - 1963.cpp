#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    float A = 0, B = 0;
    cin >> A >> B;

    float resultado = ((B - A)/A) * 100;
    cout << fixed << setprecision(2) << resultado << "%" << endl;

    return 0;
}
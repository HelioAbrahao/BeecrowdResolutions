#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int s = 0, t = 0, f = 0, horas_viagem = 0;
    cin >> s >> t >> f;

    horas_viagem = s + t + f;
    
    if(horas_viagem >= 24){
        horas_viagem -= 24;
    } else if(horas_viagem < 0){
        horas_viagem += 24;
    }

    cout << horas_viagem << endl;

    return 0;
}
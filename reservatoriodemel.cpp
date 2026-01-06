#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    double volume = 0.0, diametro = 0.0;

    while(cin >> volume >> diametro){
        double raio = diametro/2.0;
        double area_boca = 3.14 * raio * raio;
        double altura = volume/area_boca;
        
        cout << "ALTURA = " << fixed << setprecision(2) << altura << endl;
        cout << "AREA = " << fixed << setprecision(2) << area_boca << endl;
    }

    return 0;
}
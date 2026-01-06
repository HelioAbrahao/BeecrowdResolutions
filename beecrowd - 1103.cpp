#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H1,M1,H2,M2, totalmin;

    while(cin >> H1 >> M1 >> H2 >> M2){
        if(H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0){
            return 0;
        }
        
        int minAtual = H1 * 60 + M1;
        int minAlarme = H2 * 60 + M2;

        totalmin = minAlarme - minAtual;

        if(totalmin < 0){
            totalmin += 1440;
        } 
        
        cout << totalmin << endl;
    }

    return 0;
}
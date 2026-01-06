#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ano = 0;
    cin >> ano;
    
    for(int i = 0; i < ano; i++){
        int ano2 = 0;
        cin >> ano2;

        if(ano2 < 2015){
            cout << abs(ano2 - 2015) << " D.C." << endl;
        } else {
            cout << ano2 - 2014 << " A.C." << endl;
        }
    }

    return 0;
}
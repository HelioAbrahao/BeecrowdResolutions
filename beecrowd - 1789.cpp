#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N {}, maior{};
    
    while(cin >> N){
        maior = 0;
        
        for(int i = 0; i < N; i++){
            int x = 0;
            cin >> x;
            maior = max(maior, x);
        }

        if(maior < 10){
            cout << 1 << endl;
        } else if (maior < 20){
            cout << 2 << endl;
        } else if (maior >= 20){
            cout << 3 << endl;
        }
    }
    
    return 0;
}
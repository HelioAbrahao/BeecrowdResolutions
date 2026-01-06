#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n{};
    while(cin >> n && n != 0){
        int aleatorio{}, maria{}, joao{};
        for(int i = 0; i < n; i++){
            cin >> aleatorio;
            if(aleatorio == 0){
                maria++;
            } else if (aleatorio == 1){
                joao++;
            }
        }

        cout << "Mary won " << maria << " times and John won " << joao << " times" << endl;
    }

    return 0;
}

/*
Maria sempre escolhe cara. 
João sempre escolhe coroa. 
1 é coroa.
0 é cara.
*/
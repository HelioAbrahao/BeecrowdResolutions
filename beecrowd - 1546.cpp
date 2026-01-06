#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 2 4 1 1 3 4 3 3 3 2
    int n{};
    cin >> n;

    for(int i = 0; i < n; i++){
        int numero{}, nomes{};
        cin >> numero;
        for(int j = 0; j < numero; j++){
            cin >> nomes;
            if(nomes == 1){
                cout << "Rolien" << endl;
            } else if(nomes == 2){
                cout << "Naej" << endl;
            } else if(nomes == 3){
                cout << "Elehcim" << endl;
            } else if(nomes == 4){
                cout << "Odranoel" << endl;
            }
        }
    }

    return 0;
}
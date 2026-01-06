// LAVADAS
// minimo LA
// maximo LB
// SECADAS
// minimo SA
// maximo SB

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr); 

    int quantidade_roupas;
    int LA, LB, SA, SB;

    cin >> quantidade_roupas;
    cin >> LA >> LB;
    cin >> SA >> SB;

    if((LA <= quantidade_roupas && LB >= quantidade_roupas) && (SA <= quantidade_roupas && SB >= quantidade_roupas)){
        cout << "possivel" << endl; 
    } else { 
        cout << "impossivel" << endl; 
    }


    return 0;
}
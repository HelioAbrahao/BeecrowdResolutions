#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    float otavio, bruno, ian;
    cin >> otavio >> bruno >> ian; 

    if(otavio == bruno && ian > otavio){
        cout << "Empate" << endl; 
    } else if(otavio == ian && bruno > otavio){
        cout << "Empate" << endl; 
    } else if(bruno == ian && otavio > bruno){
        cout << "Empate" << endl; 
    } else if(bruno == ian && bruno == otavio){
        cout << "Empate" << endl; 
    } else if(otavio < bruno && otavio < ian){
        cout << "Otavio" << endl;
    } else if(bruno < otavio && bruno < ian){
        cout << "Bruno" << endl; 
    } else if(ian < bruno && ian < otavio) {
        cout << "Ian" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
        if(a == 12 && b == 24){
            cout << "E vespera de natal!" << endl;
        } else if (a == 12 && b == 25){
            cout << "E natal!" << endl; 
        } else if (a == 12 && b > 25){
            cout << "Ja passou!" << endl;
        } else if (a == 12 && b < 24) {
            cout << "Faltam " << b << " dias para o natal!" << endl; 
        } else {
            cout << "Faltam " << ((12 - a) * 30.5) + (25 - b) << " dias para o natal!" << endl; 
        }
    }
    return 0; 
}

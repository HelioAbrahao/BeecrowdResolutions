#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    string string1, string2;
    
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> string1 >> string2;
        cout << "Caso #" << i << ": ";
        if(string1 == string2){
            cout << "De novo!" << endl;
        } else if (string1 == "papel" && string2 == "tesoura"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "papel" && string2 == "pedra"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "papel" && string2 == "lagarto"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "papel" && string2 == "Spock"){
            cout << "Bazinga!" << endl;
// --------------------------------------------------------------------------------       
        } else if (string1 == "pedra" && string2 == "papel"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "pedra" && string2 == "tesoura"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "pedra" && string2 == "lagarto"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "pedra" && string2 == "Spock"){
            cout << "Raj trapaceou!" << endl;
// ---------------------------------------------------------------------------------
        } else if (string1 == "tesoura" && string2 == "papel"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "tesoura" && string2 == "pedra"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "tesoura" && string2 == "lagarto"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "tesoura" && string2 == "Spock"){
            cout << "Raj trapaceou!" << endl;
// --------------------------------------------------------------------------------
        } else if (string1 == "lagarto" && string2 == "pedra"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "lagarto" && string2 == "Spock"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "lagarto" && string2 == "tesoura"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "lagarto" && string2 == "papel"){
            cout << "Bazinga!" << endl;       
// --------------------------------------------------------------------------------
        } else if (string1 == "Spock" && string2 == "papel"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "Spock" && string2 == "pedra"){
            cout << "Bazinga!" << endl;
        } else if (string1 == "Spock" && string2 == "lagarto"){
            cout << "Raj trapaceou!" << endl;
        } else if (string1 == "Spock" && string2 == "tesoura"){
            cout << "Bazinga!" << endl;
        }
    }

    return 0;
}
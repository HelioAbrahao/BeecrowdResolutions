#include<iostream>
#include<set>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<string>tentativa; 
    string entrada;
    while(cin >> entrada){
        tentativa.insert(entrada);
    }

    cout << tentativa.size() << endl;

    return 0; 
}
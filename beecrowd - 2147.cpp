#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        string entrada;
        cin >> entrada;

        float tempo = entrada.size() * 0.01; 

        cout << fixed << setprecision(2) << tempo << endl; 
    }

    return 0;
}
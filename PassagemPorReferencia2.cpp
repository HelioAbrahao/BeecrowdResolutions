#include <iostream>
using namespace std;

int funcao(int &a){
    a = a - 2;
    return a; 
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin >> number;

    cout << funcao(number) << endl;

    cout << number; 
    

    return 0;
}
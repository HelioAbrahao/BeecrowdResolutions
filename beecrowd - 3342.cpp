#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int number;
    cin >> number;

    if(number % 2 == 0){
        cout << (number * number)/2 << " casas brancas e " << (number * number)/2 << " casas pretas" << endl; 
    } else {
        cout << (((number * number)/2) + 1) << " casas brancas e " << (number * number)/2 << " casas pretas" << endl; 
    }

    return 0;
}
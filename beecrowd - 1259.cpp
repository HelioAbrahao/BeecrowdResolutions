#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isOdd(int number){ // Impar
    if(number % 2 != 0){
        return true;
    } else {
        return false;
    }
} 

int main(){
    vector<int>pares;
    vector<int>impares; 

    int n; 
    cin >> n; 
    for(int i = 0; i < n; i++){
        int number;
        cin >> number;

        if(isOdd(number) == true){
            impares.push_back(number);
        } else {
            pares.push_back(number);
        }
    }

    sort(pares.begin(), pares.end()); 
    sort(impares.begin(), impares.end(), greater<int>()); 


    for(int i = 0; i < pares.size(); i++){
        cout << pares[i] << endl;
    }

    for(int i = 0; i < impares.size(); i++){
        cout << impares[i] << endl;
    }

    return 0;
}
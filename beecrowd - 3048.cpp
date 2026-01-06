#include <iostream>
#include <vector>
using namespace std;

int defCont(vector<int> v){
    int temp = 2;
    int contador = 0; 
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 1){
            if(temp == 2){
                contador++;
            }
            temp = 1; 
        } else if(v[i] == 2){
            if(temp == 1){
                contador++;
            }
            temp = 2; 
        }
    }
    return contador; 
}

int main(){
    int number, contador = 0;
    cin >> number;
    
    vector<int> v(number); 

    for(int i = 0; i < number; i++){
        cin >> v[i]; 
    }

    cout << defCont(v) << endl; 

    return 0; 
}
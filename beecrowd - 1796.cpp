#include <iostream>
#include <vector>
using namespace std;

int main(){
    int number;
    cin >> number;

    vector<int> v(number);

    for(int i = 0; i < number; i++){
        cin >> v[i];
    }

    int contador_favoraveis = 0;
    int contador_contra = 0;

    for(int i = 0; i < number; i++){
        if(v[i] == 1){
            contador_favoraveis++; 
        } else {
            contador_contra++; 
        }
    }

    if(contador_favoraveis >= contador_contra){
        cout << "N" << endl;
    } else {
        cout << "Y" << endl;
    }

    return 0; 
}
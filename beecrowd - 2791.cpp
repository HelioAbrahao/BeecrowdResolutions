#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> copos(4);
    for(int i = 0; i < 4; i++){
        cin >> copos[i];
    }

    for(int i = 0; i < 4; i++){
        if(copos[i] == 1){
            cout << i + 1 << endl; 
        }
    }

    return 0; 
}
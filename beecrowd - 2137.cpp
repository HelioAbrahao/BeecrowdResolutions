#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int number;
    while(cin >> number){
        vector<string> codigos(number);
        for(int i = 0; i < number; i++){
            cin >> codigos[i];
        }

        sort(codigos.begin(), codigos.end());
        for(int i = 0; i < number; i++){
            cout << codigos[i] << endl;
        }
    }

    return 0;
}
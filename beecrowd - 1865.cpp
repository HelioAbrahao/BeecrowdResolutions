#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string temp;
    int c = 0, newtons = 0;
    cin >> c; 

    for(int i = 0; i < c; i++){
        cin >> temp;
        cin >> newtons;
        if(temp == "Thor"){
            cout << "Y" << endl;
        } else {
            cout << "N" << endl;
        }
    }

    return 0;
}
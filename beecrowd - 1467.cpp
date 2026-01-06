#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int alice = 0, beto = 0, clara = 0;
    
    while(cin >> alice >> beto >> clara){    
        if(alice == beto && alice == clara){
            cout << "*" << endl;
        } else if(alice != beto && alice != clara){
            cout << "A" << endl;
        } else if(beto != alice && beto != clara){
            cout << "B" << endl;
        } else if(clara != alice && clara != beto){
            cout << "C" << endl;
        }
    }
    return 0;
}
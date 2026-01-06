#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    char a;
    int q = 0;

    cin >> s >> a;

    for(int i = 0; i < s.size(); i++){
        if (a == s[i]){
            q++;
        }
    }

    cout << q << endl;

    return 0;
}
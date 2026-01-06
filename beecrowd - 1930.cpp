#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    int somatoria_tomadas = 0;
    
    for(int i = 0; i < 4; i++){
        cin >> n; 
        somatoria_tomadas += n;
    }

    cout << somatoria_tomadas - 3 << endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0, r1 = 0, r2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }

    return 0;
}
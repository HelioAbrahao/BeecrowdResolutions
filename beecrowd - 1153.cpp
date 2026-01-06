#include <bits/stdc++.h>
using namespace std;

int fatorial(int n){
    if(n == 1 || n == 0){
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n {};
    cin >> n;

    cout << fatorial(n) << endl;

    return 0;
}
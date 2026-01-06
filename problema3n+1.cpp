#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base :: sync_with_stdio(0);
    cin.tie(0);

    int n, cont = 0; 
    cin >> n;
    while(n != 1){
        if(n % 2 == 0){
            n = n/2;
        } else {
            n = (3 * n) + 1;
        }
        cont++;
    }

    cout << cont << endl;
    return 0;
}
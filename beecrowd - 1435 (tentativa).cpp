#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n {};
    while(cin >> n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(i == j && (i + j) != (n - 1)){
                    cout << 1;
                } else if (i + j == n - 1){
                    cout << 2;
                } else {
                    cout << 3;
                }
            }
        cout << endl;
        }
    }

    return 0;
}
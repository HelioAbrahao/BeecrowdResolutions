#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    int a = 0, b = 1, temp;
    for(int i = 0; i < n; i++){
        if(i > 0) cout << " ";
        cout << a;
        temp = a + b;
        a = b;
        b = temp; 
    }

    cout << endl; 

    return 0;
}
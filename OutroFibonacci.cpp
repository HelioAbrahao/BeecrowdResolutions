#include <bits/stdc++.h>
using namespace std;

int fib(int num){
    if(num < 2) return num;
    return fib(num - 1) + fib(num - 2);
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << fib(i) << " ";
    }
    
    cout << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

/*
Matemáticamente falando, o que seria a sequência de fibonacci? 
fib(n) = fib(n - 1) + fib(n - 2)
1, 1, 2, 3, 5, 8, 13, 21
21 = 13 + 8 - fib(n) = fib(n - 1) + fib(n - 2);
*/
int fib(int n){
    if(n < 3){
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){

    int n; 
    cin >> n;

    cout << fib(n) << endl;

    return 0;
}
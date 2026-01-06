#include <bits/stdc++.h>
using namespace std;

/*
Pensar o que é a sequência de fibonacci e como ela pode representar uma funcão recursiva! 
O elemento da frente é a soma dos dois elementos anteriores.
1,1,2,3,5,8,13,21,...
Caso base ->
if(num < 2) return 1;

1, 1, n, n + 1, n + 1 + n
*/

int fib(int num){
    if(num < 2) return 1;
    return fib(num - 1) + fib(num - 1);
}

int main(){
    int number;
    cin >> number;

    cout << fib(number) << endl;
    
    return 0;
}
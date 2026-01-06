#include <iostream>
using namespace std;

long long findFactorial(long long n){
    if(n == 1 || n == 2){
        return n; 
    } else if (n == 0){
        return 1;
    } else {
        return n * findFactorial(n - 1);
    }
}

int main(){
    long long N, M;
    while(cin >> N >> M){
        long long factorial1, factorial2;
        factorial1 = findFactorial(N);
        factorial2 = findFactorial(M);

        cout << factorial1 + factorial2 << endl; 
    }

    return 0; 
}
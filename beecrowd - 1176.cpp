// #include<iostream>
// using namespace std;

// long long fib(long long indice){
//     if(indice <= 1){
//         return indice; 
//     } else {
//         return fib(indice - 1) + fib(indice - 2); 
//     }
// }


// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr); 
//     cout.tie(nullptr); 

//     int number;
//     cin >> number; 

//     for(int i = 0; i < number; i++){
//         long long x;
//         cin >> x;
//         cout << "Fib(" << x << ") = " << fib(x) << endl; 
//     }

//     return 0;
// }

// 0, 1, 1, 2, 3, 5, 8, 13, 21, ... 
// 0  1  2  3  4  5  6   7   8 

// fib(8) = 21

#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    long long fib[61]; 
    fib[0] = 0;
    fib[1] = 1; 

    for(int i = 2; i < 61; i++){
        fib[i] = fib[i - 1] + fib[i - 2]; 
    }

    int number;
    cin >> number; 

    for(int i = 0; i < number; i++){
        int N; 
        cin >> N;
        cout << "Fib(" << N << ") = " << fib[N] << endl; 
    }

    return 0; 
}
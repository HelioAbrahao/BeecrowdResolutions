#include <iostream>
using namespace std;

int main(){

    // C -> número de metros
    // N -> comprimento da pista


    int c, n;
    cin >> c >> n; 

    if(c % n == 0){
        cout << 0 << endl;
    } else {
        cout << c % n << endl;
    }

    return 0; 
}
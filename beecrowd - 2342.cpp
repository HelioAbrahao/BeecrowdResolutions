#include <iostream>
using namespace std;

int main(){
    int N = 0, P = 0, Q = 0, R = 0;
    char C;

    cin >> N;
    cin >> P >> C >> Q;
    if(C == '+'){
        R = P + Q;
    }else{
        R = P * Q;
    }

    if(R > N){
        cout << "OVERFLOW" << endl;
    }else{
        cout << "OK" << endl;
    }

    return 0;
}
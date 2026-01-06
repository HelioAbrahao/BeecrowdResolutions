#include <bits/stdc++.h>
using namespace std;

int main(){
    int X, Y, Z;
    cin >> X >> Y >> Z;


    int nTotal = 0;
    if(X % 2 == 0 || X % 5 == 0){
        nTotal++;
    }
    if(Y % 2 == 0 || Y % 5 == 0){
        nTotal++;
    }
    if(Z % 2 == 0 || Z % 5 == 0){
        nTotal++;
    }

    cout << nTotal << endl;
    return 0;
}

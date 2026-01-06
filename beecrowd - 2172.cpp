#include <iostream>
using namespace std;

int main(){
    int aumento_xp, xp_total;
    while(cin >> aumento_xp >> xp_total && aumento_xp != 0 && xp_total != 0){
        cout << aumento_xp * xp_total << endl;
    }

    return 0;
}
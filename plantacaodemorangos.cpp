#include <bits/stdc++.h>
using namespace std;

/*
Dadas as dimensões de dois locais, ele determina qual tem maior área.
*/

int main(){
    int a1, a2, b1, b2, area1, area2;
    cin >> a1 >> a2 >> b1 >> b2;

    area1 = a1 * a2;
    area2 = b1 * b2;

    if(area1 > area2){
        cout << area1 << endl;
    }else{
        cout << area2 << endl;
    }

    return 0;
}
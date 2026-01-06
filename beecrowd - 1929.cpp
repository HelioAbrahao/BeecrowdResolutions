#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x{}, y{}, z{}, a{};
    cin >> x >> y >> z >> a;

    if
    ( 
        ((z + y) > x && (z + x) > y && (x + y) > z) ||
        ((z + y) > a && (z + a) > y && (a + y) > z) ||      
        ((z + a) > x && (z + x) > a && (x + a) > z) ||
        ((a + y) > x && (a + x) > y && (x + y) > a)
    ){
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
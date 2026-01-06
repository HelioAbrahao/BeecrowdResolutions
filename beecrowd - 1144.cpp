#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int number;
    cin >> number;

    for(long long i = 1; i <= number; i++){
        cout << i << " " << (i * i) << " " << (i * i * i) << endl;
        cout << i << " " << (i * i) + 1 << " " << (i * i * i) + 1 << endl;
    }

    return 0; 
}

#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    if(number <= 800){
        cout << 1 << endl;
    } else if (number > 800 && number <= 1400){
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }

    return 0;
}
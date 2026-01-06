#include <iostream>
using namespace std;

int main(){ 
    int number;
    cin >> number;

    if(number % 2 == 0){
        cout << number + 2 << endl;
    } else {
        cout << number + 1 << endl;
    }

    return 0; 
}
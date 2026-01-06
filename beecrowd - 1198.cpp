#include<iostream>
#include <cstdlib>
using namespace std;

int main(){
    long long num1, num2; 
    while(cin >> num1 >> num2){
        long long number = num1 - num2;
        cout << abs(number) << endl; 
    }

    return 0;
}
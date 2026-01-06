#include <iostream>
using namespace std;

int main(){
    int number, greatest_number = 0;
    while(cin >> number && number != 0){
        if(greatest_number < number){
            greatest_number = number;
        }
    }

    cout << greatest_number << endl; 

    return 0; 
}
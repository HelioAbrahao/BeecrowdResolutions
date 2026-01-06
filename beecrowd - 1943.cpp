#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;

    if(number == 1){
        cout << "Top 1" << endl;
    } else if (number <= 3){
        cout << "Top 3" << endl;
    } else if (number <= 5){
        cout << "Top 5" << endl;
    } else if (number <= 10){
        cout << "Top 10" << endl; 
    } else if (number <= 25){
        cout << "Top 25" << endl;
    } else if (number <= 50){
        cout << "Top 50" << endl;
    } else {
        cout << "Top 100" << endl; 
    }

    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int number, contador_total = 0;
    cin >> number;

    for(int i = 0; i < number; i++){
        int number1, number2;
        cin >> number1 >> number2;

        contador_total += (number1 * number2);
    }

    cout << contador_total << endl;

    return 0;
}
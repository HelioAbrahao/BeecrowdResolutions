#include <iostream>
using namespace std;

int main(){
    int num; 
    cin >> num;

    for(int i = 0; i < num; i++){
        int somatoria_leds = 0; 
        
        string num2;
        cin >> num2;  

        for(int j = 0; j < num2.size(); j++){
            if(num2[j] == '1'){
                somatoria_leds += 2;
            } else if (num2[j] == '2' || num2[j] == '3' || num2[j] == '5'){
                somatoria_leds += 5; 
            } else if (num2[j] == '4'){
                somatoria_leds += 4;
            } else if (num2[j] == '6' || num2[j] == '9' || num2[j] == '0'){
                somatoria_leds += 6;
            } else if(num2[j] == '7'){
                somatoria_leds += 3;
            } else if(num2[j] == '8') {
                somatoria_leds += 7; 
            }
        }
        cout << somatoria_leds << " leds" << endl;
    } 

    return 0;
}

// 1, 2, 3, 4, 5, 6, 9, 0
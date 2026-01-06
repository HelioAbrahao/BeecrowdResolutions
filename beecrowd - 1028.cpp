// #include <iostream>
// using namespace std;

// int findMD(int number1, int number2){
//     if(number2 == 0) return number1;
//     return findMD(number2, number1 % number2);  
// }

// int main(){
//     int number;
//     cin >> number;

//     for(int i = 0; i < number; i++){
//         int number1, number2;
//         cin >> number1 >> number2; 

//         cout << findMD(number1, number2) << endl; 
//     }

//     return 0; 
// }

#include <iostream>
using namespace std;

int findMD(int number1, int number2){ 
    if(number2 == 0){
        return number1; // caso base
    } else {
        return findMD(number2, number1 % number2); 
    }
}

int main(){
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        int x, y;
        cin >> x >> y; 

        cout << findMD(x, y) << endl; 
    }
    
    return 0; 
}
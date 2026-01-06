#include <iostream>
using namespace std;

int main(){

    int number;
    cin >> number; 

    for(int i = 0; i < number; i++){
        string result; 
        string str1, str2; 
        cin >> str1 >> str2;

        int size1 = str1.size(); 
        int size2 = str2.size(); 

        if(size2 > size1){
            cout << "nao encaixa" << endl; 
            continue; 
        }

        for(int i = size1 - size2; i < size1; i++){
            result += str1[i];
        }

        if(result == str2){
            cout << "encaixa" << endl;
        } else {
            cout << "nao encaixa" << endl; 
        }
    }

    return 0; 
}
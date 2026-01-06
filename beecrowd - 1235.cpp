#include<iostream>
using namespace std;

int main(){
    int num = 0; 
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        string str, result; 
        getline(cin, str);

        int str_size = str.size();
        int half_size = str_size/2; 

        for(int i = half_size - 1; i >= 0; i--){
            result += str[i]; 
        }

        for(int i = str_size - 1; i >= half_size; i--){
            result += str[i]; 
        }
        
        cout << result << endl; 
    }

    return 0; 
}
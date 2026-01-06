#include<iostream>
using namespace std;

int main(){
    int number;
    cin >> number; 
    cin.ignore();

    for(int i = 0; i < number; i++){
        string str, str_meio, str_final; 
        getline(cin, str);

        for(int j = 0; j < str.size(); j++){
            if(isupper(str[j]) || islower(str[j])){
                str[j] = str[j] + 3;
            }
        }

    

        for(int j = str.size() - 1; j >= 0; j--){
            str_meio += str[j]; 
        }

        for(int j = 0; j < str_meio.size()/2; j++){
            str_final += str_meio[j]; 
        }

        for(int j = str_meio.size()/2; j < str_meio.size(); j++){
            str_final += (str_meio[j] - 1); 
        }

        cout << str_final << endl; 
        
    }

    return 0;
}
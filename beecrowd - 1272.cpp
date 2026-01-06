#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int num; 
    cin >> num;
    cin.ignore();

    for(int i = 0; i < num; i++){
        string str1, str2; 
        getline(cin, str1); 

        for(int j = 0; j < str1.size(); j++){
            if(str1[j] >= 'a' && str1[j] <= 'z'){
                if(j == 0 || str1[j - 1] == ' '){
                    str2 += str1[j]; 
                }
            }
        }
        cout << str2 << endl; 
    }

    return 0;
}
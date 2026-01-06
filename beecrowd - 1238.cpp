#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int num;
    string str1, str2; 
    cin >> num;

    for(int i = 0; i < num; i++){
        string result = "";
        cin >> str1 >> str2;
        int minSize = min(str1.size(), str2.size()); 
        for(int i = 0; i < minSize; i++){
            result += str1[i]; 
            result += str2[i]; 
        }

        for(int i = minSize; i < str1.size(); i++){
            result += str1[i]; 
        }

        for(int i = minSize; i < str2.size(); i++){
            result += str2[i]; 
        }

        cout << result << endl; 
    }

   
    return 0; 
}
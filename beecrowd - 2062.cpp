#include <iostream>
#include <vector>
using namespace std;
string identificarPalavra(string str){
    for(int i = 0; i < str.size(); i++){
        if(str[0] == 'U' && str[1] == 'R' && str[2] != 'I' && str.size() == 3){
            return "URI";
        } else if(str[0] == 'O' && str[1] == 'B' && str[2] != 'I' && str.size() == 3){
            return "OBI";
        } else {
            return str;
        }
    }
}

int main(){
    int number;
    cin >> number;

    for(int i = 0; i < number; i++){
        string str;
        cin >> str;
        cout << identificarPalavra(str);
        if(i < number - 1) cout << " ";
    }
    cout << endl; 

    return 0; 
}
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string temp, result;
    while(getline(cin, temp)){
        result = ""; 
        bool variable = true; 
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] != ' '){
                if(variable){
                    result += toupper(temp[i]);
                } else {
                    result += tolower(temp[i]); 
                }
                variable = !variable;
            } else {
                result += temp[i];
            }
        }

        cout << result << endl;
    }

    return 0; 
}
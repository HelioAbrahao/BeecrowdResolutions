#include <iostream>
#include <vector>
using namespace std;

int isNlogoniaPattern(vector<int> vetor){
    bool bool_variable = false;

    if(vetor.size() == 1) return 1; 
    if(vetor.size() == 2){
        if(vetor[0] == vetor[1]){
            return 0;
        } else {
            return 1; 
        }
    }

    for(int i = 1; i < vetor.size() - 1; i++){
        if(!((vetor[i] > vetor[i - 1] && vetor[i] > vetor[i + 1]) || (vetor[i] < vetor[i - 1] && vetor[i] < vetor[i + 1]))){
            return 0;
        }
    }

    return 1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int number;
    cin >> number;
    vector<int> vetor(number);

    for(int i = 0; i < number; i++){
        cin >> vetor[i]; 
    }

    cout << isNlogoniaPattern(vetor) << endl; 

    return 0;
}
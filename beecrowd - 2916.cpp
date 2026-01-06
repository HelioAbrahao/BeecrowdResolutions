#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 1000000007; 

int main(){
    int a, b;
     
    while(cin >> a >> b){
        long long somatoria = 0;
        vector<int> vetor(a);
        for(int i = 0; i < a; i++){
            cin >> vetor[i];
        }

        sort(vetor.begin(), vetor.end());
            
        for(int i = vetor.size() - 1; i >= vetor.size() - b; i--){
            somatoria += vetor[i];
        }
        cout << (somatoria % MOD) << endl;
    }

    return 0;
}
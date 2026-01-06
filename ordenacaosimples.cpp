#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> sequencia(n);    
    
    for(int i = 0; i < n; i++){
        cin >> sequencia[i];
    }

    sort(sequencia.begin(), sequencia.end());

    for(int i = 0; i < n; i++){
        cout << sequencia[i] << " ";
    }
    
    cout << endl;
    return 0;
}
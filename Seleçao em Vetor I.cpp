#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int q = 0;
    double A[100], indices[100], valores[100];

    for(int i = 0; i < 100; i++){
        cin >> A[i];
    }
    
    for(int i = 0; i < 100; i++){
        if(A[i] <= 10){
            indices[q] = i;
            valores[q] = A[i];
            q++;
        }
    }
    
    for(int i = 0; i < q; i++){
        cout << "A[" << static_cast<int> (indices[i]) << "] = " << fixed << setprecision(1) << valores[i] << endl;
    }

return 0;
}
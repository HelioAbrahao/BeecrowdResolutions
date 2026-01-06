#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float N[100];
    cin >> N[0];
    cout << "N[0] = " << fixed << setprecision(4) << N[0] << endl;


    for(int i = 0; i < 99; i++){
        N[i + 1] = N[i]/2;
    }

    for(int i = 1; i < 100; i++){
        
        cout << "N[" << static_cast<int>(i) << "] = " << fixed << setprecision(4) << N[i] << endl;
    }

    return 0;
}
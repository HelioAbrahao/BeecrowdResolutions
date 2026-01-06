#include <iostream>
using namespace std;

int main(){
    char O;
    double a,b;
    cin >> O;
    cin >> a >> b;

    if(O == 'M'){
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << a * b << endl;
    }else{
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << a/b << endl;
    }

    return 0;
}
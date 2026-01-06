#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, n4, n5, contador_total = 0;

    cin >> n1;
    contador_total += (n1 * 300);
    cin >> n2; 
    contador_total += (n2 * 1500);
    cin >> n3; 
    contador_total += (n3 * 600);
    cin >> n4;
    contador_total += (n4 * 1000);
    cin >> n5; 
    contador_total += (n5 * 150); 

    cout << contador_total + 225 << endl;
    return 0; 
}
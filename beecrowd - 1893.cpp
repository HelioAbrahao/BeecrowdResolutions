// Terminar depois
#include <iostream>
using namespace std;

int main(){
    double n1, n2;
    cin >> n1 >> n2; 

    double media = (n1 + n2)/2;

    if(media > 0 && media < 2 && n1 < n2){
        cout << "nova" << endl; 
    } else if(){
 
    } else if(media > 2 && media < 96){
        cout << "crescente" << endl; 
    } else if(media > 97 && media < 100 && n1 > n2){
        cout << "cheia" << endl; 
    } else if(media > 97 && media < 100 && n1 < n2){
        cout << "minguante" << endl;
    }

    return 0;
}

/*
Se a porção visível da lua no momento estiver entre 0 e 2%, por exemplo, é lua nova, se for entre 3 e 96% é lua crescente, se for entre 97 e 100 é cheia. Se for entre 96 e 3 é lua minguante. 
*/
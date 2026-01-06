#include <iostream>
using namespace std;

class A{
    int a;
public: 
    int valor(){
        return a;
    }
    void altera(int x){
        a = x;
    }
};

int main(){
    A x;
    x.altera(7);
    cout <<  x.valor() << endl;
}
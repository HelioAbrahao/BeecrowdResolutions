#include <iostream>
using namespace std;

int main(){
    int X, Y, M;
    while(cin >> X >> Y >> M){
        for(int i = 0; i < M; i++){
            int xi, yi;
            cin >> xi >> yi; 
            
            if(((xi <= Y) && (yi <= X)) || ((xi <= X) && (yi <= Y))){
                cout << "Sim" << endl;
            } else {
                cout << "Nao" << endl;
            }
        }
    }   

    return 0; 
}

/*
X -> Dimensões da placa da empresa
Y -> Dimensões da placa da empresa
M -> Quantidade de pedidos
*/
#include <iostream>

using namespace std;

string title(string F){
	for(int i = 0; i < F.size(); i++){
        F[i] = tolower(F[i]);
        if(i == 0 || F[i - 1] == ' '){ // Esse é basicamente o modo utilizado para definir qual é a primeira letra de 
//uma nova palavra. É necessário que o entendimento desse if seja absolutamente perfeito. Somente assim o programa pode ser realizado.
            F[i] = toupper(F[i]);
        }
    }
    return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}

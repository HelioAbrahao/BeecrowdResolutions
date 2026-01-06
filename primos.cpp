/*
Modifique o código abaixo, adicionando o código da função eh_primo, que deve retornar true quando o número xx for primo e
false caso contrário.
*/

#include <iostream>

using namespace std;

// Lembrar que quando há um retorno em uma funcão, ela termina ali.

bool eh_primo(int x){
	if(x <= 1){
		return false;}
	if(x == 2){
		return true;}
	for(int i = 3; i < x; i+=2){
		if(x % i == 0){
			return false;
		}
	}
	return true;
}


int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

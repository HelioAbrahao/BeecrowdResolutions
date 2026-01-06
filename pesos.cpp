/*
Apenas uma caixa pode ser colocada por vez dentro de uma cabine. 
Restricão de seguranca: Durante uma viagem do elevador, a diferenca de peso entre as cabines pode ser no máximo de 8 unidades.
P - Q <= 8 (P -> Peso da cabine mais pesada. Q -> Peso da cabine mais leve.)

Como fazer os passos, um de cada vez. De maneira com que o código funcione? 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, primeiro, m;
  cin >> n >> primeiro;

  if(primeiro > 8){
    cout << "N" << endl;
    return 0;
  }

  for(int i = 1; i < n; i++){
    cin >> m;
    if(m - primeiro > 8){
      cout << "N" << endl;
      return 0;
    }
    primeiro = m;
  }
  
  cout << "S" << endl;
  return 0;
}
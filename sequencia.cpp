#include <iostream> // cin e cout

using namespace std;
 
int main(){
  
  int n; // declaro a variável n
  int sequencia[1000010]; // 10 elevado a 6 é o valor máximo de n e quando declaramos vetores estáticos dessa forma, sempre 
// adicionamos uma sobra.
// declaro o vetor de inteiros "sequencia" de 1000010 posições
  
  cin>>n; // leio o valor de n na tela
  
  for(int i=0; i<n; i++){
    cin>>sequencia[i]; // salvo cada número em uma posição do vetor, de 0 até n-1
  } // Basicamente completo cada elemento do vetor com um valor. 
  
  for(int i=n-1; i>=0; i--){
    cout<<sequencia[i]<<" "; // percorro o vetor de trás para frente, imprimindo seus elementos
  }
  
  cout<<"\n"; // imprimo a quebra de linha ao fim do código
  
  return 0;
}

// Vamos supor que n tenha sido 4. No segundo for n vai valer 3.
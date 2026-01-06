//"Dada uma palavra A que contém apenas letras minúsculas, informe quantas vezes cada vogal aparece em A."
#include <iostream>
using namespace std;

int main(){
    string A;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    cin >> A;

    for(int i = 0; i < A.size(); i++){
        if(A[i] == 'a'){ 
      a++; 
    }
    else if(A[i] == 'e'){ 
      e++;
    }
    else if(A[i] == 'i'){
      i++;
    }
    else if(A[i] == 'o'){
      o++;
    }
    else if(A[i] == 'u'){
      u++;
    }
  }

    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;

    return 0;
}

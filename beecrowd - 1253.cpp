#include <iostream>
#include <string>
using namespace std;

int main(){
    int general_reps, number_sum;
    string inserted_sentence; 
    
    cin >> general_reps;
    
    for(int i = 0; i < general_reps; i++){
        cin >> inserted_sentence; 
        cin >> number_sum; 
        for(int j = 0; j < inserted_sentence.length(); j++){
            if((inserted_sentence[j] - number_sum) < 'A'){
                cout << char((inserted_sentence[j] - number_sum) + 26);
            } else {
                cout << char(inserted_sentence[j] - number_sum); 
            }
        }
        cout << endl; 
    }

    return 0; 
}

/*
O grande problema dessa código é o fato de que precisamos lidar com a volta do caractere após o final do término do alfabeto. Z + 2 viraria de acordo com a tabela ascii '\', porém nesse exercicio essa somatoria deve retorna 'B'. É possível fazer algo como if(Y + N > Z) RETURN Y + N - 26.


LEMBRAR DE CONVERTER PARA CHAR APÓS A SOMA DO 26, NÃO ANTES!
*/
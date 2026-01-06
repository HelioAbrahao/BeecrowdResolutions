/*
Ele quer que eu basicamente some todos os elementos de um vetor. Como é 
possível fazer isso?
Em um vetor com N elementos.

arr[9] = 
1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 

0   1   2   3   4   5   6   7   8  -> Indexes

return arr[N - 1] + somaVetor[arr, N - 1];


return arr[0] + somaVetor[arr, 0]

*/

#include <bits/stdc++.h>
using namespace std;

int somaVetor(int arr[], int num){
    if(num == 0) return 0;
    return arr[num - 1] + somaVetor(arr, num - 1);
}

int main(){
    int n;
    cin >> n;
    int vetor[n];

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    cout << somaVetor(vetor, n) << endl;

    return 0;
}
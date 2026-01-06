#include <iostream>
using namespace std;

int n, v[100020];

int main(){
    cin >> n;
    int curr = 0, answer = 0, prev;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    prev = v[1];
    for (int i = 1; i <= n; i++) {
        if (v[i] == prev) {
            curr++;
        } else {
            curr = 1;
            prev = v[i];
        }
        answer = max(answer, curr); // Comando responsável por definir basicamente que: answer é igual ao maior valor entre
// aqueles presentes dentro da ().
    }

    cout << answer << "\n";
}

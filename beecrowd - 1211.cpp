#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    while (cin >> n) {
        vector<string> phones;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            phones.push_back(s);
        }
        sort(phones.begin(), phones.end());
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < phones[i].size(); j++) {
                if (phones[i][j] == phones[i - 1][j]) sum++;
                else break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}


// Se eu fizer um contador responsavel por 